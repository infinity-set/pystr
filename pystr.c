#include <stdio.h>
#include <stdlib.h>

// Define a structure for the dynamic string
typedef struct pystr
{
    int length; // Length of the string
    int alloc;  // Allocated memory for the string
    char *data; // Character data
} pystr;

/* Python Syntax --> x = str() */
// Create a new pystr instance and initialize its members
pystr *pystr_new();

/* Python Syntax --> del(x) */
// Free the memory occupied by the pystr instance
void pystr_del(pystr **self);

// Print information about the pystr structure
void pystr_dump(pystr *self);

/* Python Syntax --> len(x) */
// Get the length of the pystr
int pystr_len(pystr *self);

// Get a pointer to the character data in the pystr
char *pystr_str(pystr *self);

/* Python Syntax --> x = x + 'H' */
// Append a single character to the pystr
void pystr_append(pystr *self, char character);

/* Python Syntax --> x = x + 'ello World' */
// Append a string to the pystr
void pystr_appends(pystr *self, const char *str);

/* Python Syntax --> x = "A completely new string" */
// Assign a new string to the pystr, freeing the previous data
void pystr_assign(pystr *self, const char *str);

int main()
{
    printf("\n---Create an empty string.---\n");
    // Python syntax --> x = str()
    pystr *x = pystr_new();
    pystr_dump(x);

    printf("\n---Append 'H' to the string.---\n");
    // Python syntax --> x = x + 'H'
    pystr_append(x, 'H');
    pystr_dump(x);

    printf("\n---Append 'ello World' to the string.---\n");
    // Python syntax --> x = x + 'ello World'
    pystr_appends(x, "ello World");
    pystr_dump(x);

    printf("\n---Create a new string.---\n");
    // Python syntax --> x = "A completely new string"
    pystr_assign(x, "A completely new string");
    printf("\nString --> %s\n", pystr_str(x));
    printf("Length --> %d\n", pystr_len(x));

    printf("\n---Delete the string.---\n");
    // Python syntax --> del(x)
    pystr_del(&x);
    pystr_dump(x);

    return 0;
}

// Create a new pystr instance and initialize its members
pystr *pystr_new()
{
    pystr *p = (pystr *)malloc(sizeof(pystr));
    if (p == NULL)
    {
        printf("Not enough memory!");
        return p;
    }

    // Initialize pystr members
    p->length = 0;
    p->alloc = 10;
    // Calloc adds a '\0' terminator at initialization. Similar to writing "p->data[0] = '\0';"
    p->data = (char *)calloc(p->alloc, sizeof(char));

    if (p->data == NULL)
    {
        printf("Not enough memory!");
        free(p); // Free the allocated pystr structure
        p = NULL;
    }

    return p;
}

// Free the memory occupied by the pystr instance
void pystr_del(pystr **self)
{
    if (*self != NULL)
    {
        free((*self)->data); // Free the string data
        free(*self);         // Free the structure
        *self = NULL;        // Set the original pointer to NULL
    }
}

// Print information about the pystr structure
void pystr_dump(pystr *self)
{
    if (self == NULL)
    {
        printf("\n***String does not exist!***\n");
    }
    else if (self->data[0] == '\0')
    {
        printf("\nString Length --> %d  \nAllocated Memory --> %d  \nData --> '\\0'\n", self->length, self->alloc);
    }
    else
    {
        printf("\nString Length --> %d  \nAllocated Memory --> %d  \nData --> %s\n", self->length, self->alloc, self->data);
    }
}

// Get the length of the pystr
int pystr_len(pystr *self)
{
    return self->length;
}

// Get a pointer to the character data in the pystr
char *pystr_str(pystr *self)
{
    return self->data;
}

// Append a single character to the pystr
void pystr_append(pystr *self, char character)
{
    if (self->length < (self->alloc - 1))
    {
        // Move NULL character from array to the next position
        self->data[self->length + 1] = self->data[self->length];
        // Place the new character where the "NULL" character used to be
        self->data[self->length] = character;
        // Increment length of array
        self->length++;
    }
    else
    {
        // If all positions are filled in the array, copy the array to a new array with "10" more spaces
        self->data = (char *)realloc(self->data, self->alloc + 10);

        if (self->data == NULL)
        {
            printf("Not enough memory!");
            free(self->data);
            free(self);
            self = NULL; // Free the allocated pystr structure
            exit(1);     // Return an error indicator
        }
        self->alloc += 10;
        // Move NULL character from array to the next position
        self->data[self->length + 1] = self->data[self->length];
        // Place the new character where the "NULL" character used to be
        self->data[self->length] = character;
        // Increment length of array
        self->length++;
    }
}

// Append a string to the pystr
void pystr_appends(pystr *self, const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        pystr_append(self, str[i]);
    }
}

// Assign a new string to the pystr, freeing the previous data
void pystr_assign(pystr *self, const char *str)
{

    free(self->data);
    self->alloc = 10;
    self->length = 0;
    self->data = (char *)calloc(self->alloc, sizeof(char)); // Calloc adds a '\0' terminator at initialization

    if (self->data == NULL)
    {
        printf("Not enough memory!");
        free(self);
        self = NULL; // Free the allocated pystr structure
        exit(1);     // Return an error indicator
    }

    // Append the new string
    pystr_appends(self, str);
}

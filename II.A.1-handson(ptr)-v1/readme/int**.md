🔑 Why int **table?

Because you want to use:

table[i][j]

For that to work, table must behave like a “pointer to rows”, and each row must be a pointer to columns.

⸻

🧠 Think of a 2D array like this:

table
  ↓
[ ptr ] → [ int int int ]
[ ptr ] → [ int int int ]
[ ptr ] → [ int int int ]

So:
	•	table → points to array of row pointers
	•	table[i] → points to a row
	•	table[i][j] → actual value

⸻

🔍 Break it down step-by-step

1️⃣

int **table;

👉 “table is a pointer to a pointer to int”

Meaning:
	•	First * → points to rows
	•	Second * → each row points to ints

⸻

2️⃣ Allocate rows

table = (int **) malloc(rowSize * sizeof(int *));

👉 You are creating:
	•	An array of rowSize pointers
	•	Each pointer will later point to a row

⸻

3️⃣ Allocate each row

table[i] = (int *) malloc(columnSize * sizeof(int));

👉 Each row now has:
	•	columnSize integers

⸻

🔥 Why NOT just int *table?

If you do:

int *table;

Then:
	•	It’s just one long block (1D array)
	•	No concept of rows

So:

table[i][j] ❌ INVALID


⸻

⚡ Key idea

Type	Meaning	Can use table[i][j]?
int *	1D array	❌ No
int **	Array of pointers (true 2D style)	✅ Yes


⸻

💡 Simple analogy
	•	int * → one straight line of houses 🏠🏠🏠
	•	int ** → streets with houses 🏘️
	•	table[i] → a street
	•	table[i][j] → a house on that street

⸻

✅ Final answer

You use int ** because:

A 2D array using A[i][j] requires a pointer to pointers, where each pointer represents a row.

⸻

If you want next level understanding, I can show you how this compares to:

int A[3][3];

and ￼ why that one is actually not int ** internally (very important concept).
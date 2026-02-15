/* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends. */




/* Answer: (ii) False.

Why:
If S is a 1-D array, *(S + i) is the element at index i. Indexing starts at 0, so:

*(S + 0) → S[0] (1st element)

*(S + 1) → S[1] (2nd element)

*(S + 2) → S[2] (3rd element)

*(S + 3) → S[3] (4th element)

So *(S+3) refers to the fourth element, not the third. */
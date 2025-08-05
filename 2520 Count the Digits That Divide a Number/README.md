The basic idea behind the approach is, find the last digit and keep checking if it completely divides the given number, and every time it does,
keep increasing the count, and at last just return the count.

Note:Dont check directly if lastdigit%num == 0 (bcz we are updating num in while loop) instead store the num in a original varibale and check
with that.

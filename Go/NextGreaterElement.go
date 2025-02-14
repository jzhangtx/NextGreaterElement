package main

import "fmt"

func GetArrayFromInput(count int, prompt string) []int {
	if count == 0 {
		return []int{}
	}

	fmt.Print(prompt)

	v := make([]int, count)
	for i := 0; i < count; i++ {
		fmt.Scan(&v[i])
	}

	return v
}

func GetNextGreaterElement(A []int) []int {
	result := make([]int, len(A))

	for i := 0; i < len(A); i++ {
		result[i] = -1
		for j := i + 1; j < len(A); j++ {
			if A[j] > A[i] {
				result[i] = A[j]
				break
			}
		}
	}

	return result
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := GetArrayFromInput(count, "Please enter the array: ")
		result := GetNextGreaterElement(vec)

		fmt.Print("The greater elements: ")
		fmt.Println(result)
	}
}

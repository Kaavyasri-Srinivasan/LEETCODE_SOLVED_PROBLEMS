# Problems are solved using C++ from Leetcode.

3Sum.cpp Question: 
            Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

            Notice that the solution set must not contain duplicate triplets.
              Example 1:
              Input: nums = [-1,0,1,2,-1,-4]
              Output: [[-1,-1,2],[-1,0,1]]
              Explanation: 
                nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
                nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
                nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
                The distinct triplets are [-1,0,1] and [-1,-1,2].
                Notice that the order of the output and the order of the triplets does not matter.

4Sum_using_Two_Pointers.cpp: Question
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

                0 <= a, b, c, d < n
                a, b, c, and d are distinct.
                nums[a] + nums[b] + nums[c] + nums[d] == target

                You may return the answer in any order.

                Example 1:

                        Input: nums = [1,0,-1,0,-2,2], target = 0
                        Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
                        Example 2:
                        
                        Input: nums = [2,2,2,2,2], target = 8
                        Output: [[2,2,2,2]]
                        

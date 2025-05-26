l1 = [1, 2, 4, 7]
l2 = [3, 5, 6]

def merge(list1, list2):
    result = []
    i = 0
    j = 0
    while(i < len(list1) and j < len(list2)):
        if list1[i] <= list2[j]:
            result.append(list1[i])
            i += 1
            # print(result)
        else:
            result.append(list2[j])
            j += 1
            # print(result)

    # print("loop ended")

    while(i < len(list1)):
        result.append(list1[i])
        i += 1
        
    while(j < len(list2)):
        result.append(list2[j])
        j += 1



    return result

print(merge(l1, l2))
// 函数: sub_417da0
// 地址: 0x417da0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *arg2
void* edx = &arg2[1]

while (i != 0xf423f)
    if (i s> 0x4f4c)
        if (i - 0x4f4d u<= 0x66)
            switch (i)
                case 0x4f4d
                    *(arg3 + 0x70) = *edx
                    edx += 4
                case 0x4f4e
                    *(arg3 + 0x74) = *edx
                    edx += 4
                case 0x4fb0
                    int32_t eax_9 = *edx
                    sub_4d1c30(eax_9, edx + 4, arg3 + 0x78, eax_9)
                    edx = edx + 4 + eax_9
                case 0x4fb1
                    *(arg3 + 0x9c) = *edx
                    edx += 4
                case 0x4fb2
                    *(arg3 + 0xa0) = *edx
                    edx += 4
                case 0x4fb3
                    *(arg3 + 0xa4) = *edx
                    edx += 4
    else if (i == 0x4f4c)
        int32_t eax_4 = *edx
        sub_4d1c30(eax_4, edx + 4, arg3 + 0x4b, eax_4)
        edx = edx + 4 + eax_4
    else if (i == 0x4e84)
        int32_t eax_3 = *edx
        sub_4d1c30(eax_3, edx + 4, arg3 + 3, eax_3)
        edx = edx + 4 + eax_3
    else if (i == 0x4ee8)
        int32_t eax_2 = *edx
        sub_4d1c30(eax_2, edx + 4, arg3 + 0x27, eax_2)
        edx = edx + 4 + eax_2
    
    i = *edx
    edx += 4

*arg4 = edx
return 0

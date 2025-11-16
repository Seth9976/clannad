// 函数: sub_4160b0
// 地址: 0x4160b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg3 + 0x44)
int32_t ebx = *(arg3 + 0x40)
int32_t eax_1 = *(arg3 + 0x48)
*arg4 = 0
*arg5 = 0

if (arg2 - 2 u<= 3)
    switch (arg2)
        case 2
            int32_t eax_3 = neg.d(*(arg3 + 0x4c))
            *arg5 = eax_3
            return eax_3
        case 3
            int32_t eax_4 = data_7030dc
            
            if (eax_4 s<= eax)
                *arg5 = 0
                return eax_4
            
            void* eax_5 = eax_4 - eax
            *arg5 = eax_5
            return eax_5
        case 4
            int32_t eax_6 = neg.d(eax_1)
            *arg4 = eax_6
            return eax_6
        case 5
            eax_1 = data_70300c
            
            if (eax_1 s> ebx)
                int32_t eax_7 = eax_1 - ebx
                *arg4 = eax_7
                return eax_7
            
            *arg4 = 0

return eax_1

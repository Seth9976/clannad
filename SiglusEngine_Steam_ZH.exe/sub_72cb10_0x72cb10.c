// 函数: sub_72cb10
// 地址: 0x72cb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* eax = arg1[1]
uint32_t i_5 = divu.dp.d(0:0x3b9ac9f0, arg3)

if (i_5 s<= 0)
    *(*arg1 + 0x14) = 0x48
    (**arg1)(arg1)

uint32_t i_3 = arg4

if (i_5 s< arg4)
    i_3 = i_5

*(eax + 0x50) = i_3
void* result = sub_72c900(arg1, arg2, arg4 << 2)
uint32_t eax_5 = arg4
int32_t esi_1 = 0

if (eax_5 != 0)
    uint32_t i_2 = i_3
    
    do
        uint32_t i_4 = eax_5 - esi_1
        
        if (i_2 u>= i_4)
            i_2 = i_4
        
        void* eax_6 = sub_72ca40(arg1, arg2, i_2 * arg3)
        uint32_t i_1 = i_2
        
        if (i_2 != 0)
            uint32_t i
            
            do
                *(result + (esi_1 << 2)) = eax_6
                esi_1 += 1
                eax_6 += arg3
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        eax_5 = arg4
    while (esi_1 u< eax_5)

return result

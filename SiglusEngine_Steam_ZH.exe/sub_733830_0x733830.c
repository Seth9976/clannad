// 函数: sub_733830
// 地址: 0x733830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
void* result = *(arg1 + 0x1c0)
void* i_2 = *(arg1 + 0x5c)
arg1 = i_2
int32_t ebx = *(result + 0x18)

if (arg3 s> 0)
    do
        void* i_1 = i_2
        result = *(arg2 + (edi << 2))
        
        if (i_2 != 0)
            void* i
            
            do
                uint32_t edx_4 = (zx.d(*(result + 1)) u>> 2 << 5) + (zx.d(*(result + 2)) u>> 3)
                int32_t ecx_5 = *(ebx + (zx.d(*result) u>> 3 << 2))
                int16_t temp0_1 = *(ecx_5 + (edx_4 << 1))
                *(ecx_5 + (edx_4 << 1)) += 1
                int16_t* edx_5 = ecx_5 + (edx_4 << 1)
                ecx_5.w = *edx_5
                
                if (temp0_1 == 0xffff)
                    *edx_5 = ecx_5.w - 1
                
                result += 3
                i = i_1
                i_1 -= 1
            while (i != 1)
            i_2 = arg1
        
        edi += 1
    while (edi s< arg3)

return result

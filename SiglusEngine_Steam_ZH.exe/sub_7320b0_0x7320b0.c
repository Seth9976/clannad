// 函数: sub_7320b0
// 地址: 0x7320b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = esi_1
int32_t edi = *(*(arg1 + 0x1bc) + 0x18)
void* result = *(arg1 + 0x5c)
arg1 = result

if (not(cond:0))
    int32_t edx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        result = *(edx_1 + arg2[2])
        int32_t* edx_3 = arg4
        arg4 = &arg4[1]
        
        if (arg1 u> 0)
            void* ecx_3 = *(edx_1 + arg2[1]) - result
            void* ebx_2 = *(edx_1 + *arg2) - result
            void* edx_5 = *edx_3 - result
            void* var_10_1 = ecx_3
            void* i_1 = arg1
            void* i
            
            do
                uint32_t esi_2 = zx.d(*(ecx_3 + result))
                result += 1
                int32_t edx_12 = *(edi + (zx.d(*(ebx_2 + result - 1) - 0x80 + esi_2.b) << 2))
                    + *(edi + (zx.d(*(result - 1) - 0x80 + esi_2.b) << 2) + 0x800)
                i = i_1
                i_1 -= 1
                *(edx_5 + result - 1) = ((edx_12 + *(edi + (esi_2 << 2) + 0x400)) s>> 0x10).b
                ecx_3 = var_10_1
            while (i != 1)
            esi_1 = arg5
        
        edx_1 += 4
        temp1_1 = esi_1
        esi_1 -= 1
        arg5 = esi_1
    while (temp1_1 - 1 s>= 0)

return result

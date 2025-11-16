// 函数: sub_731f40
// 地址: 0x731f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = edi_1
int32_t esi = *(*(arg1 + 0x1bc) + 0x18)
void* result = *(arg1 + 0x5c)
arg1 = result

if (not(cond:0))
    int32_t ebx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        result = *(ebx_1 + arg2[1])
        int32_t* ebx_3 = arg4
        arg4 = &arg4[1]
        
        if (arg1 u> 0)
            void* i_1 = arg1
            void* ecx_4 = *(ebx_1 + arg2[2]) - result
            void* edx_2 = *(ebx_1 + *arg2) - result
            void* ebx_5 = *ebx_3 - result
            void* var_c_1 = edx_2
            void* ecx_5 = ecx_4
            void* i
            
            do
                uint32_t ecx_6 = zx.d(*(ecx_5 + result))
                result += 1
                int32_t ebx_7 =
                    *(esi + (ecx_6 << 2) + 0x800) + *(esi + (zx.d(*(edx_2 + result - 1)) << 2))
                edx_2 = var_c_1
                *(ebx_5 + result - 1) =
                    ((ebx_7 + *(esi + (zx.d(*(result - 1)) << 2) + 0x400)) s>> 0x10).b
                ecx_5 = ecx_4
                i = i_1
                i_1 -= 1
            while (i != 1)
            edi_1 = arg5
        
        ebx_1 += 4
        temp1_1 = edi_1
        edi_1 -= 1
        arg5 = edi_1
    while (temp1_1 - 1 s>= 0)

return result

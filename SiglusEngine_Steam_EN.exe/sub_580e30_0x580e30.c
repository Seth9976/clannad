// 函数: sub_580e30
// 地址: 0x580e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg5
int32_t edx = arg7

if (edi s> edx)
    int32_t eax = edi
    edi = edx
    edx = eax
    arg5 = edi
    arg7 = edx

void* ecx = arg6
void* esi = arg8

if (ecx s> esi)
    void* eax_1 = ecx
    ecx = esi
    esi = eax_1
    arg6 = ecx
    arg8 = esi

int32_t* esi_1 = arg10
void* i_1 = esi - ecx + 1
sub_4d6960(((i_1 * (edx - edi + 1)) << 2) + 4, esi_1, arg9, ((i_1 * (edx - edi + 1)) << 2) + 4, 
    "32BitCutData")
int16_t* eax_5 = *esi_1
*eax_5 = (edx - edi + 1).w
void* result = &eax_5[1]
arg10 = result
*result = i_1.w

if (arg5 s>= 0 && arg7 s< arg2 && arg6 s>= 0)
    result = arg8
    
    if (result s< arg4)
        void* edx_4 = arg10 + 2
        result = arg3 + ((arg2 * arg6 + arg5) << 2)
        
        if (i_1 s> 0)
            int32_t ecx_4 = (arg2 - (edx - edi + 1)) << 2
            arg5 = ecx_4
            void* i
            
            do
                if (edx - edi + 1 s> 0)
                    int32_t j_1 = edx - edi + 1
                    int32_t j
                    
                    do
                        int32_t ecx_5 = *result
                        result += 4
                        *edx_4 = ecx_5
                        edx_4 += 4
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    ecx_4 = arg5
                
                result += ecx_4
                i = i_1
                i_1 -= 1
            while (i != 1)

return result

// 函数: sub_6ebe30
// 地址: 0x6ebe30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
_memset(esi, 0, 0x100)
void* ebx = arg2
int32_t result = 0

if (ebx s> 0)
    void* ecx_1 = ebx + 0x7f
    char* edx_1 = 0x7f - ebx
    void* edi_1 = esi + ebx
    void* var_c_1 = esi - ecx_1 + 0x7f
    
    do
        void* ecx_4
        
        if (edx_1 s>= 0)
            ecx_4.b = result.b
            ecx_4.b -= ebx.b
            *(edx_1 + esi) = ecx_4.b
        
        ebx.b = result.b
        ecx_4 = ecx_1 + result
        ebx.b = neg.b(ebx.b)
        *(edx_1 + edi_1) = ebx.b
        *(var_c_1 + ecx_4) = result.b
        esi = arg1
        
        if (ecx_4 s< 0x100)
            ebx.b += arg2.b
            *(edi_1 + result + 0x7f) = ebx.b
        
        ebx = arg2
        result += 1
        edx_1 -= 1
    while (result s< ebx)

return result

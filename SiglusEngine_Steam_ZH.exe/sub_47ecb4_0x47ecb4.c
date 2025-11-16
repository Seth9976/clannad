// 函数: sub_47ecb4
// 地址: 0x47ecb4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t** var_8 = arg1
int32_t** var_c = arg1
char* esi = *(arg2 + 8)
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
int32_t result = 0
char* eax_1 = esi

if (esi == 0 || *esi == 0)
    return 0xe40000

int32_t var_8_1 = 0x10

while (true)
    int32_t edx
    edx.b = *eax_1
    
    if (edx.b != 0)
        int32_t edx_1 = sx.d(edx.b)
        
        if (edx_1 s> 0x77)
            if (edx_1 == 0x78)
                edi_1 = 0
            else if (edx_1 == 0x79)
                edi_1 = 1
            else
                if (edx_1 != 0x7a)
                    break
                
                edi_1 = 2
        else if (edx_1 == 0x77 || edx_1 == 0x61)
            edi_1 = 3
        else if (edx_1 == 0x62)
            edi_1 = 2
        else if (edx_1 == 0x67)
            edi_1 = 1
        else
            if (edx_1 != 0x72)
                break
            
            edi_1 = 0
        
        eax_1 = &eax_1[1]
    
    char ecx = var_8_1.b
    var_8_1 += 2
    result |= edi_1 << ecx
    
    if (var_8_1 u>= 0x18)
        if (*eax_1 == 0)
            return result
        
        break

char* var_1c_1 = esi
sub_42aba3(*arg1, arg2, 0x7d4, "invalid swizzle '%s'")
arg1[0x13] = 1
return 0

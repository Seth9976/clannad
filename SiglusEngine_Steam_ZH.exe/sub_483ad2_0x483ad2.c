// 函数: sub_483ad2
// 地址: 0x483ad2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t edi
int32_t var_c = edi
char* edi_1 = arg2
char* eax_1 = *(esi + 8) + 0x38
void** result

while (true)
    char edx = *eax_1
    arg1.b = edx
    char temp1_1 = *edi_1
    bool c_1 = edx u< temp1_1
    
    if (edx == temp1_1)
        if (arg1.b == 0)
            result = nullptr
            break
        
        edx = eax_1[1]
        arg1.b = edx
        char temp4_1 = edi_1[1]
        c_1 = edx u< temp4_1
        
        if (edx == temp4_1)
            eax_1 = &eax_1[2]
            edi_1 = &edi_1[2]
            
            if (arg1.b != 0)
                continue
            
            result = nullptr
            break
    
    bool c_2 = unimplemented  {sbb eax, eax}
    result = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
    break

if (result != 0)
    int32_t i = 0
    
    if (*(esi + 0x14) u> 0)
        do
            if ((*(**(*(esi + 0x20) + (i << 2)) + 0x3c))(arg2, arg3).b != 0)
                goto label_483b14
            
            i += 1
        while (i u< *(esi + 0x14))
    
    result.b = 0
else
    *arg3 = esi
label_483b14:
    result.b = 1

return result

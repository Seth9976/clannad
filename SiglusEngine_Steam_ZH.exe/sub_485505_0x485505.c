// 函数: sub_485505
// 地址: 0x485505
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* result = *(esi + 0x30)
int32_t edi
int32_t var_c = edi

if (result == 0)
label_485555:
    int32_t edi_3 = 0
    
    if (*(esi + 0x34) u<= 0)
    label_485577:
        result.b = 0
    else
        while ((*(**(*(esi + 0x40) + (edi_3 << 2)) + 0x10))(arg2, arg3).b == 0)
            edi_3 += 1
            
            if (edi_3 u>= *(esi + 0x34))
                goto label_485577
        
        result.b = 1
else
    char* edi_1 = arg2
    
    while (true)
        char edx = *result
        arg1.b = edx
        char temp1_1 = *edi_1
        bool c_1 = edx u< temp1_1
        
        if (edx == temp1_1)
            if (arg1.b == 0)
                result = nullptr
                break
            
            edx = *(result + 1)
            arg1.b = edx
            char temp4_1 = edi_1[1]
            c_1 = edx u< temp4_1
            
            if (edx == temp4_1)
                result += 2
                edi_1 = &edi_1[2]
                
                if (arg1.b != 0)
                    continue
                
                result = nullptr
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(result, result, c_1), 0xffffffff, c_2)
        break
    
    if (result != 0)
        goto label_485555
    
    int32_t eax_3 = neg.d(esi - 4)
    *arg3 = sbb.d(eax_3, eax_3, esi != 4) & esi
    result.b = 1

return result

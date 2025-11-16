// 函数: sub_46b27d
// 地址: 0x46b27d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = 0

if (arg1 == 0)
    return 0x8876086c

uint32_t eax = 0x2c
int32_t ebx
int32_t var_c_1 = ebx
uint32_t var_8_1 = 0x2c
int32_t edi
int32_t var_14_1 = edi
int32_t result

while (true)
    char* edi_1 = arg1
    uint32_t eax_2 = (eax + edx) u>> 1
    char* esi_1 = (&data_ac4418)[eax_2 * 3]
    int32_t ecx_3
    
    while (true)
        ebx.b = *esi_1
        uint32_t ecx_1
        ecx_1.b = ebx.b
        char temp1_1 = *edi_1
        bool c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            if (ecx_1.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = esi_1[1]
            ecx_1.b = ebx.b
            char temp5_1 = edi_1[1]
            c_1 = ebx.b u< temp5_1
            
            if (ebx.b == temp5_1)
                esi_1 = &esi_1[2]
                edi_1 = &edi_1[2]
                
                if (ecx_1.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        bool c_2 = unimplemented  {sbb ecx, ecx}
        ecx_3 = sbb.d(sbb.d(ecx_1, ecx_1, c_1), 0xffffffff, c_2)
        break
    
    if (ecx_3 == 0)
        uint32_t eax_4 = eax_2 * 0xc
        
        if ((*(eax_4 + 0xac4420) & arg2) == arg2)
            if (arg3 != 0)
                *arg3 = (&data_ac4418)[eax_2 * 3]
                void* edi_5 = &arg3[1]
                void* esi_4 = eax_4 + 0xac441c
                *edi_5 = *esi_4
                *(edi_5 + 4) = *(esi_4 + 4)
            
            result = 0
            break
    else
        if (ecx_3 s>= 0)
            var_8_1 = eax_2
        else
            edx = eax_2 + 1
        
        eax = var_8_1
        
        if (edx u< eax)
            continue
    
    result = 0x80004005
    break

return result

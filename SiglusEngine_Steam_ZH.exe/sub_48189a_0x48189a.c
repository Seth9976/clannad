// 函数: sub_48189a
// 地址: 0x48189a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* edi_1 = arg3

if (edi_1 == 0)
    edi_1 = &arg1

void* esi = arg1
int32_t eax = *(esi + 4)
int32_t eax_1

if (eax != 9)
    int32_t result
    
    if (eax != 8)
        if (eax == 1)
            int32_t* ebx_1 = arg2
            *ebx_1 = 0
            *edi_1 = 0
            
            while (true)
                result = sub_48189a(*(*(*(esi + 8) + 0x18) + 0x20), &arg3, &arg2)
                
                if (result s< 0)
                    return result
                
                *ebx_1 += arg3
                int32_t* eax_7 = *edi_1
                
                if (arg2 u> eax_7)
                    eax_7 = arg2
                
                *edi_1 = eax_7
                esi = *(esi + 0xc)
                
                if (esi == 0)
                    return 0
        
        return 0x80004005
    
    int32_t* var_14_1 = edi_1
    edi_1 = arg2
    result = sub_48189a(*(esi + 0x10), edi_1, var_14_1)
    
    if (result s< 0)
        return result
    
    eax_1 = *(esi + 0x14) * *edi_1
else
    int32_t ecx_1 = *(esi + 0x10)
    eax_1 = 1
    
    if (ecx_1 == 1 || ecx_1 == 0)
        *arg2 = 1
        eax_1 = *(esi + 0x1c)
    else if (ecx_1 != 2)
        if (ecx_1 != 3)
            return 0x80004005
        
        *arg2 = 1
    else
        *arg2 = *(esi + 0x1c)
        eax_1 = *(esi + 0x18)

*edi_1 = eax_1
return 0

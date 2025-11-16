// 函数: sub_465f90
// 地址: 0x465f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void** ecx_1 = arg1
int32_t* ebx = ecx_1[6]
int32_t esi = ebx[1]
int32_t edi
int32_t var_14 = edi
char* edi_1 = *ebx
uint32_t i_1

while (true)
    if (esi == 0)
        if (ebx[3](ecx_1) == 0)
            return 0
        
        edi_1 = *ebx
        esi = ebx[1]
        ecx_1 = arg1
    
    uint32_t eax_2 = zx.d(*edi_1)
    esi -= 1
    edi_1 = &edi_1[1]
    
    if (eax_2 != 0xff)
        uint32_t i
        
        do
            void* eax_3 = ecx_1[0x6f]
            *(eax_3 + 0x18) += 1
            *ebx = edi_1
            ebx[1] = esi
            
            if (esi == 0)
                if (ebx[3](ecx_1) == 0)
                    return 0
                
                edi_1 = *ebx
                esi = ebx[1]
                ecx_1 = arg1
            
            i = zx.d(*edi_1)
            esi -= 1
            edi_1 = &edi_1[1]
        while (i != 0xff)
    
    do
        if (esi == 0)
            if (ebx[3](ecx_1) == 0)
                return 0
            
            edi_1 = *ebx
            esi = ebx[1]
            ecx_1 = arg1
        
        i_1 = zx.d(*edi_1)
        esi -= 1
        edi_1 = &edi_1[1]
    while (i_1 == 0xff)
    
    if (i_1 != 0)
        break
    
    void* eax_6 = ecx_1[0x6f]
    *(eax_6 + 0x18) += 2
    *ebx = edi_1
    ebx[1] = esi

int32_t edx_4 = *(ecx_1[0x6f] + 0x18)

if (edx_4 != 0)
    void* eax_8 = *ecx_1
    *(eax_8 + 0x14) = 0x74
    *(eax_8 + 0x18) = edx_4
    *(eax_8 + 0x1c) = i_1
    (*(eax_8 + 4))(ecx_1, 0xffffffff)
    *(arg1[0x6f] + 0x18) = 0
    ecx_1 = arg1

*ebx = edi_1
ebx[1] = esi
ecx_1[0x69] = i_1
return 1

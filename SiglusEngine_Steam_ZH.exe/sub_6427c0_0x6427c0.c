// 函数: sub_6427c0
// 地址: 0x6427c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
int32_t i_1 = i

if (arg1 == i)
    return 

int32_t* edi_1 = arg1 + 0x18

do
    void* ebx_1 = *edi_1
    
    if (ebx_1 != 0)
        int32_t eax_1 = edi_1[1]
        int32_t var_8_1 = eax_1
        
        if (ebx_1 != eax_1)
            int32_t* esi = ebx_1 + 0xac
            void* ebx_2 = ebx_1
            
            do
                if (*esi u>= 8)
                    j__free(esi[-5])
                    eax_1 = var_8_1
                
                *esi = 7
                esi[-1] = 0
                esi[-5].w = 0
                
                if (esi[-6] u>= 8)
                    j__free(esi[-0xb])
                    eax_1 = var_8_1
                
                esi[-6] = 7
                esi[-7] = 0
                ebx_2 += 0xb8
                esi[-0xb].w = 0
                esi = &esi[0x2e]
            while (ebx_2 != eax_1)
            
            i = i_1
        
        j__free(*edi_1)
        *edi_1 = 0
        edi_1[1] = 0
        edi_1[2] = 0
    
    if (edi_1[-1] u>= 8)
        j__free(edi_1[-6])
    
    edi_1[-1] = 7
    edi_1[-2] = 0
    edi_1[-6].w = 0
    edi_1 = &edi_1[9]
while (&edi_1[-6] != i)

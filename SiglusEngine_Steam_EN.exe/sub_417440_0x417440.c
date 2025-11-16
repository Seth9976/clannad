// 函数: sub_417440
// 地址: 0x417440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 == 0)
    int32_t eax_1 = data_131d2f4
    int32_t var_8_1 = 1
    int32_t esi_1
    
    if (eax_1 == 1)
        void* edi_2 = &data_131d36c
        int32_t i_5 = 0x10
        int32_t i
        
        do
            int32_t eax_10 = *(edi_2 - 0x54)
            
            if (eax_10 == data_131d2ec || eax_10 == 0xffffffff)
                esi_1 = var_8_1
            else
                sub_4d20b0(edi_2 - 4)
                int32_t eax_11 = *edi_2
                *(edi_2 + 0x84) = eax_11
                
                if (eax_11 == *(edi_2 - 4))
                    *(edi_2 + 0xa0) = 0
                    esi_1 = var_8_1
                else
                    esi_1 = 0
                    var_8_1 = 0
            
            edi_2 += 0x3b4
            i = i_5
            i_5 -= 1
        while (i != 1)
    label_417573:
        
        if (esi_1 != 0)
            data_131d2f4 = 0xffffffff
        else if (data_131d2f4 != 0xffffffff)
            return 1
    else
        if (eax_1 == 2)
            void* edi_1 = &data_131d36c
            int32_t i_4 = eax_1 + 0xe
            int32_t i_1
            
            do
                int32_t eax_4 = *(edi_1 - 0x54)
                
                if (eax_4 == data_131d2ec || eax_4 == 0xffffffff)
                    esi_1 = var_8_1
                else
                    sub_4d20b0(edi_1 - 4)
                    int32_t eax_5 = *edi_1
                    *(edi_1 + 0x84) = eax_5
                    
                    if (eax_5 == *(edi_1 - 4))
                        esi_1 = var_8_1
                        *(edi_1 + 0xa0) = 0
                    else
                        esi_1 = 0
                        var_8_1 = 0
                    
                    *(edi_1 + 0x88) = sub_4d16f0(sub_4d20b0(edi_1 + 0x24), *(edi_1 + 0x90), 
                        *(edi_1 + 0x28), *(edi_1 + 0x98))
                    *(edi_1 + 0x8c) = sub_4d16f0(sub_4d20b0(edi_1 + 0x4c), *(edi_1 + 0x94), 
                        *(edi_1 + 0x50), *(edi_1 + 0x9c))
                
                edi_1 += 0x3b4
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            goto label_417573
        
        data_131d2f4 = 0xffffffff
else
    data_131d2f4 = 0xffffffff
    data_703008 = 1

void* eax_12 = &data_131d3f0
int32_t i_3 = 0x10
int32_t i_2

do
    int32_t ecx_6 = *(eax_12 - 0xd8)
    
    if (ecx_6 != data_131d2ec && ecx_6 != 0xffffffff)
        *eax_12 = 0xff
        __builtin_memset(eax_12 + 4, 0, 0x1c)
    
    eax_12 += 0x3b4
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return 0

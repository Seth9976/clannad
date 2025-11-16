// 函数: sub_4956b0
// 地址: 0x4956b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t i_1 = 0xffffffff
void var_1c
int32_t edi_2

if (data_12dc4d0 s<= 0)
    edi_2 = arg1
else
    int32_t var_8_1 = arg1
    
    do
        void* eax_2 = sub_495490(i)
        void* edi_1 = eax_2
        
        if (edi_1 != 0 && i_1 != 0xffffffff)
            eax_2 = sub_495620(edi_1 + 8, var_8_1, &var_1c, edi_1 + 8, *(edi_1 + 0x18))
        
        if (edi_1 == 0 || (i_1 != 0xffffffff && eax_2 != 1))
            edi_2 = var_8_1
        else
            sub_4d1c30(eax_2, edi_1 + 8, &var_1c, 0x10)
            edi_2 = *(edi_1 + 0x18)
            var_8_1 = edi_2
            i_1 = i
        
        i += 1
    while (i s< data_12dc4d0)

if (arg1 != 0)
    void* eax_4 = sub_495490(data_12dc5f0)
    
    if (eax_4 != 0)
        int32_t eax_5
        
        if (i_1 != 0xffffffff)
            eax_5 = sub_495620(eax_4, edi_2, &var_1c, eax_4 + 8, *(eax_4 + 0x18))
        
        if (i_1 == 0xffffffff || eax_5 == 1)
            sub_4d1c30(eax_4, eax_4 + 8, &var_1c, 0x10)
            return i

return i_1

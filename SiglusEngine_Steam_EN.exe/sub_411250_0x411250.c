// 函数: sub_411250
// 地址: 0x411250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
eax.b = arg1 == 0
void* i = &(&data_976b5c)[eax * 8]

do
    *(i - 4) = 0
    *i = 0
    *(i - 0xc) = 0
    *(i - 8) = 0
    i += 0x20
while (i s< &data_976f7c)

if (arg1 != 0)
    int32_t esi_1 = data_7030dc
    int32_t edi_1 = data_70300c
    
    if (data_976b50 == 0 || data_976b58 != edi_1 || data_976b5c != esi_1)
        i = sub_4d6c40(&data_976b50, &data_976b54)
        
        if (edi_1 s> 0 && esi_1 s> 0)
            uint32_t eax_4 = (edi_1 * esi_1) << 2
            i = sub_4d6960(eax_4, &data_976b54, &data_976b50, eax_4, "AVG_BANK")
        
        bool cond:2_1 = data_702fc0 == 0
        data_976b58 = edi_1
        data_976b5c = esi_1
        
        if (not(cond:2_1) && data_1af0a78 != 0)
            bool cond:3_1 = data_1318520 != 2
            data_20cc940.d = 1
            
            if (not(cond:3_1))
                i = sub_563b20(0)

return sub_411500(i, data_70300c, 1, data_7030dc)

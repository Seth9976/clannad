// 函数: sub_4cd890
// 地址: 0x4cd890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_20be858

if (eax != 0)
    int32_t i = 0
    
    if (arg1 != 0)
        int32_t i_1 = 0
        
        if (eax s> 0)
            uint32_t eax_24
            
            do
                int32_t ecx = *((i << 2) + &data_20bea40)
                int32_t ecx_27 = data_20be880 * zx.d(ecx.w) s/ 0xff * data_20be884 s/ 0xff
                    * data_20be888 s/ 0xff * data_20be88c s/ 0xff * data_20be890 s/ 0xff
                    * data_20be894 s/ 0xff * data_20be898
                int32_t ecx_53 = data_20be880 * (ecx u>> 0x10) s/ 0xff * data_20be884 s/ 0xff
                    * data_20be888 s/ 0xff * data_20be88c s/ 0xff * data_20be890 s/ 0xff
                    * data_20be894 s/ 0xff * data_20be898
                eax_24 = waveOutSetVolume(*((i_1 << 2) + &data_20be9c0), 
                    (ecx_53 s/ 0xff) << 0x10 | (ecx_27 s/ 0xff))
                i = i_1 + 1
                i_1 = i
            while (i s< data_20be858)
            
            return eax_24
    else if (eax s> 0)
        do
            eax = waveOutSetVolume(*((i << 2) + &data_20be9c0), *((i << 2) + &data_20bea40))
            i += 1
        while (i s< data_20be858)

return eax

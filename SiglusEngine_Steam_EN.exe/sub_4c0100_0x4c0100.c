// 函数: sub_4c0100
// 地址: 0x4c0100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_208c70c

if (eax != 0)
    int32_t i = 0
    
    if (arg1 != 0)
        int32_t i_1 = 0
        
        if (eax s> 0)
            uint32_t eax_24
            
            do
                int32_t ecx = *((i << 2) + &data_208ccd0)
                int32_t ecx_27 = data_208c710 * zx.d(ecx.w) s/ 0xff * data_208c714 s/ 0xff
                    * data_208c718 s/ 0xff * data_208c71c s/ 0xff * data_208c720 s/ 0xff
                    * data_208c724 s/ 0xff * data_208c728
                int32_t ecx_53 = data_208c710 * (ecx u>> 0x10) s/ 0xff * data_208c714 s/ 0xff
                    * data_208c718 s/ 0xff * data_208c71c s/ 0xff * data_208c720 s/ 0xff
                    * data_208c724 s/ 0xff * data_208c728
                eax_24 = auxSetVolume(*((i_1 << 2) + &data_208cc50), 
                    (ecx_53 s/ 0xff) << 0x10 | (ecx_27 s/ 0xff))
                i = i_1 + 1
                i_1 = i
            while (i s< data_208c70c)
            
            return eax_24
    else if (eax s> 0)
        do
            eax = auxSetVolume(*((i << 2) + &data_208cc50), *((i << 2) + &data_208ccd0))
            i += 1
        while (i s< data_208c70c)

return eax

// 函数: sub_48e820
// 地址: 0x48e820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    *arg2 = 0

if (arg1 u> 0x270f)
    return 0xffffffff

switch (zx.d(*(arg1 + 0x1af19e0)))
    case 0
        if (data_108fab0 != 0 && data_1b8be88 != 0)
            int32_t eax_2 = data_1b8be84
            
            if (*(eax_2 + (arg1 << 3)) != 0 && *(eax_2 + (arg1 << 3) + 4) != 0)
                if (arg2 != 0)
                    if (data_1af44cc == 0)
                        void* var_4_1 = &data_108fa8c
                        int32_t var_8_1 = 0x134fd78
                        char* var_c_1 = &data_1352208
                        sub_4c84d0(arg2, "%s\%s\%s")
                        return 2
                    
                    if (data_1af44c8 != 0)
                        char const* const var_4_3 = "KINETICDATA.PAK"
                    else
                        void* var_4_2 = &data_108fa8c
                    
                    void* var_8_2 = &data_13517e0
                    sub_4c84d0(arg2, "%s\%s")
                
                return 2
    case 1
        if (arg2 != 0)
            void* var_4_4 = arg1
            int32_t var_8_3 = 0x134fd78
            char* var_c_2 = &data_1352208
            sub_4c84d0(arg2, "%s\%s\Seen%04d.txt")
        
        return 1
    case 2
        if (arg2 != 0)
            void* var_4_5 = arg1
            void* var_8_4 = &data_13517e0
            sub_4c84d0(arg2, "%s\Seen%04d.txt")
        
        return 1
    case 3
        return 3

return 0

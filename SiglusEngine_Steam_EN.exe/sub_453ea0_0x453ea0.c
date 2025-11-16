// 函数: sub_453ea0
// 地址: 0x453ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (data_13710b2 != 0 && data_131372c != 0 && data_1313934 != 0)
    int32_t ecx_1 = data_703660
    
    if (ecx_1 != 0xffffffff)
        uint32_t eax_1 = zx.d(data_70365c)
        char const* const var_644_1
        void var_41c
        char const* const var_638_1
        int32_t esi_6
        
        if (eax_1 == 0)
            esi_6 = ecx_1 s/ 0x2710
            int32_t var_630_3 = ecx_1 s% 0x2710
            int32_t var_634_3 = esi_6
            var_638_1 = "z%03d%04d.wav"
        label_453f71:
            sub_4c84d0(&var_41c, var_638_1)
            int32_t var_640_2 = esi_6
            var_644_1 = "%03d"
        else
            if (eax_1 == 1)
                esi_6 = ecx_1 s/ 0x186a0
                int32_t var_630_2 = ecx_1 s% 0x186a0
                int32_t var_634_2 = esi_6
                var_638_1 = "z%03d%05d.wav"
                goto label_453f71
            
            int32_t esi_3 = ecx_1 s/ 0x186a0
            int32_t var_630_1 = ecx_1 s% 0x186a0
            int32_t var_634_1 = esi_3
            sub_4c84d0(&var_41c, "z%04d%05d.wav")
            int32_t var_640_1 = esi_3
            var_644_1 = "%04d"
        void var_214
        sub_4c84d0(&var_214, var_644_1)
        void* var_630_4 = &var_41c
        void* var_634_4 = &var_214
        char* var_638_2 = &data_131372c
        void var_624
        sub_4c84d0(&var_624, "%s\%s\%s")
        result = sub_4d3e20(&data_1313934)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result

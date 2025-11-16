// 函数: sub_54d820
// 地址: 0x54d820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result = data_20c2460
int32_t i = 0
int32_t* result_2 = result
void* esi = data_1321ec0
void* var_30 = esi

if (data_1321eb8 s> 0)
    int32_t edi_1 = data_1333e3c
    
    do
        int32_t i_1 = i
        void var_28
        sub_4c84d0(&var_28, "%03d")
        int32_t eax_2 = data_1333e40
        
        if (eax_2 != 0)
            eax_2(0, &var_28, i, i, data_20c22c0, 0x4f32)
            edi_1 = data_1333e3c
        
        if (edi_1 != 0)
            edi_1(1, esi, i, i, data_20c22c0, 0x4f32)
            edi_1 = data_1333e3c
        
        int32_t eax_4 = *result_2
        char* edx_1
        
        if (eax_4 == 0xffffffff)
            edx_1 = &data_61c90c
        else if (eax_4 == 0)
            edx_1 = &data_6201e8
        else
            edx_1 = &data_61fd0c
        
        sub_4cfd70(&var_28, edx_1)
        
        if (edi_1 != 0)
            edi_1(2, &var_28, i, i, data_20c22c0, 0x4f32)
            edi_1 = data_1333e3c
        
        int32_t var_44_1 = *(esi + 0x20)
        char const* const var_48_4
        
        if (data_12dc4bc == 0)
            var_48_4 = "Z[%04d]"
        else
            var_48_4 = "Zb[%05d]"
        
        sub_4c84d0(&var_28, var_48_4)
        
        if (edi_1 != 0)
            edi_1(3, &var_28, i, i, data_20c22c0, 0x4f32)
            edi_1 = data_1333e3c
        
        int32_t j = 0
        result = var_30 + 0x24
        int32_t* result_1 = result
        
        do
            int32_t var_44_2 = *result
            sub_4c84d0(&var_28, "%03d")
            
            if (edi_1 != 0)
                edi_1(j + 4, &var_28, i, i, data_20c22c0, 0x4f32)
                edi_1 = data_1333e3c
            
            j += 1
            result = &result_1[1]
            result_1 = result
        while (j s< 5)
        
        i += 1
        result_2 = &result_2[1]
        esi = var_30 + 0x3c
        var_30 = esi
    while (i s< data_1321eb8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

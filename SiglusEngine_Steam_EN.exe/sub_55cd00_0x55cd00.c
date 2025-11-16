// 函数: sub_55cd00
// 地址: 0x55cd00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_8 = eax_1

if (data_702fc0 != 0 && data_1af0a80 != 0 && data_1af414c != 0)
    bool cond:0_1 = data_1b1bcd4 == 0
    data_1b8a6f8 = 0
    
    if (not(cond:0_1))
        int32_t ecx_1 = data_20c54b0
        
        if (ecx_1 s> 0x752f)
            sub_55ca60()
            enum MESSAGEBOX_RESULT eax_2 = MessageBoxA(data_1af0a80, 0x6215f0, 0x6215e0, MB_OK)
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_2
        
        int32_t edx_1 = data_20c54a8
        data_1af0a0c = data_1319058
        eax_1 = data_131310c - data_20c4ff4
        
        if (eax_1 s>= edx_1)
            int32_t eax_6 = data_20c54a4 + data_20c4ff8
            int32_t esi_1 = data_20c54a0
            int32_t edi_1 = data_1319054
            data_20c54a4 = eax_6
            
            if (eax_6 s>= edi_1)
                esi_1 += 1
                data_20c54a4 = eax_6 - edi_1
            
            int32_t var_614 = 0
            bool cond:1_1 = data_1332b3c != 0
            data_20c54a8 = edx_1 + esi_1
            int32_t var_618 = 0
            int32_t esi_2
            
            if (cond:1_1 || data_1332b38 != 0 || data_1332b34 != 0)
                int32_t eax_10 = (data_1332b64 * data_1332b60) << 2
                sub_4d6960(eax_10, &var_614, &var_618, eax_10, "CaptureMagTmp")
                esi_2 = var_614
                sub_55cad0(esi_2)
                ecx_1 = data_20c54b0
            else
                esi_2 = data_1332b54
            
            if (data_1319060 != 0)
                ecx_1 = 0x752f - ecx_1
            
            int32_t var_624_1 = ecx_1
            void* var_628_3 = &data_1318e48
            char* var_62c_1 = &data_1318c40
            char var_610[0x208]
            sub_4c84d0(&var_610, "%s\%s%05d.bmp")
            sub_4d6e30(&var_610, data_1332b60, esi_2, data_1332b64, &var_610)
            data_20c54b0 += 1
            sub_4d6c40(&var_618, &var_614)
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x10624dd3, timeGetTime() - data_20c54ac)
            int32_t edx_7 = edx_6 s>> 6
            int32_t esi_5 = (edx_7 u>> 0x1f) + edx_7
            int32_t eax_15
            int32_t edx_8
            edx_8:eax_15 = muls.dp.d(0x88888889, esi_5)
            int32_t edx_10 = (edx_8 + esi_5) s>> 5
            int32_t ecx_12 = (edx_10 u>> 0x1f) + edx_10
            int32_t var_624_2 = esi_5 - ecx_12 * 0x3c
            int32_t var_628_4 = ecx_12
            void string
            sub_4c84d0(&string, " %!d ")
            SetDlgItemTextA(data_1af0a80, 0x4e5e, &string)
            int32_t eax_20
            int32_t edx_11
            edx_11:eax_20 = muls.dp.d(0x10624dd3, data_20c54a8)
            int32_t edx_12 = edx_11 s>> 6
            int32_t esi_9 = (edx_12 u>> 0x1f) + edx_12
            int32_t eax_21
            int32_t edx_13
            edx_13:eax_21 = muls.dp.d(0x88888889, esi_9)
            int32_t edx_15 = (edx_13 + esi_9) s>> 5
            int32_t ecx_15 = (edx_15 u>> 0x1f) + edx_15
            int32_t var_624_4 = esi_9 - ecx_15 * 0x3c
            int32_t var_628_5 = ecx_15
            sub_4c84d0(&string, " %!d ")
            SetDlgItemTextA(data_1af0a80, 0x4e59, &string)
            int32_t var_624_6 = data_20c54b0
            sub_4c84d0(&string, " %!d ")
            eax_1 = SetDlgItemTextA(data_1af0a80, 0x4e56, &string)

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1

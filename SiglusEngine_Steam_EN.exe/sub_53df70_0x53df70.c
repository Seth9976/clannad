// 函数: sub_53df70
// 地址: 0x53df70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
void* edx
ecx, edx = __chkstk(0x2598)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = data_1bfdd30

if (eax_2 s> 0x3e8)
label_53e58d:
    data_1b8b06c = 1
    sub_5f02dd(arg1 ^ &__saved_ebp)
    return eax_2

if (eax_2 == 0x3e8)
    sub_5f02dd(arg1 ^ &__saved_ebp)
    return eax_2

if (eax_2 u> 0x78)
    goto label_53e58d

eax_2 = zx.d(lookup_table_53e5d8[eax_2])
void var_1514
int32_t eax_10
int32_t eax_13
int32_t i
int32_t eax_37

switch (eax_2)
    case 0
        int32_t eax_3 = data_1af4e84
        
        if (eax_3 == 0)
            sub_4ef190(eax_3, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
            HWND eax_6 = sub_53dca0(data_1b8a728)
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return eax_6
        
        eax_2 = eax_3 - 1
        
        if (eax_3 != 1)
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return eax_2
        
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), "SS", &data_1b8a720)
        data_1b8a73c
        HWND eax_5 = sub_53dca0(data_1b8a728)
        sub_5f02dd(arg1 ^ &__saved_ebp)
        return eax_5
    case 1
        int32_t ecx_10
        eax_2, ecx_10 = sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        char* edx_6 = data_1b8a728
        
        if (edx_6 == 0 || *edx_6 == 0)
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return eax_2
        
        BOOL eax_7 = sub_4d7580(ecx_10, edx_6)
        sub_5f02dd(arg1 ^ &__saved_ebp)
        return eax_7
    case 2
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        HWND eax_8 = sub_53de20(data_1b8a728)
        sub_5f02dd(arg1 ^ &__saved_ebp)
        return eax_8
    case 3
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        int32_t var_18_1 = data_1b8a728
        char* var_1c_1 = &data_1352208
    label_53e0ea:
        eax_10 = sub_4c3da0(sub_4c84d0(&var_1514, "%s\%s"), 0xffffffff, &var_1514, 0xffffffff)
    label_53e0f2:
        eax_37 = eax_10 - 1
    label_53e0f3:
        int32_t eax_11 = neg.d(eax_37)
        eax_13 = sbb.d(eax_11, eax_11, eax_37 != 0) + 1
        goto label_53e0f8
    case 4
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        int32_t var_18_2 = data_1b8a728
        int32_t var_1c_2 = 0x1350390
        char* var_20_2 = &data_1352410
    case 5
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        int32_t var_18_3 = data_1b8a728
        int32_t var_1c_3 = 0x134e310
        char* var_20_3 = &data_1352618
    case 6
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        int32_t var_18_4 = data_1b8a728
        int32_t var_1c_4 = 0x1350fc0
        char* var_20_4 = &data_1352820
    case 7
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        i = data_1af4510
        
        if (i == 0xffffffff)
        label_53e21a:
            data_715e98 = 0
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return i
        
        int32_t var_10_11 = data_1b8a728
        int32_t var_14_10 = i + 0x41
        eax_10 = sub_4c3da0(sub_4c84d0(&var_1514, "%c:\%s"), 0xffffffff, &var_1514, 0xffffffff)
        goto label_53e0f2
    case 8
        sub_4ef190(eax_2, edx + 0x20, *(edx + 0x20), U"SMDB", &data_1b8a720)
        int32_t var_18_6 = data_1b8a728
        void* var_1c_6 = &data_13517e0
        goto label_53e0ea
    case 9
        int32_t var_10_13 = 0xff
        char var_10c = 0
        char var_10b[0xe3]
        _memset(&var_10b, 0, var_10_13)
        char var_30c = 0
        char var_30b[0xff]
        sub_4ef190(_memset(&var_30b, 0, 0xff), edx + 0x20, *(edx + 0x20), "S$S", &data_1b8a720)
        char eax_23 = data_1b8a734.b
        int32_t esi_8 = 0
        int32_t var_258c = 1
        int32_t i_1 = 8
        int32_t eax_24 = sub_453310()
        
        if (eax_24 == 0xffffffff)
            data_715e98 = 0xffffffff
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return eax_24
        
        sub_4532b0(eax_24)
        int32_t var_10_16 = eax_24 + 0x41
        void var_20c
        int32_t eax_26 =
            sub_4c3da0(sub_4c84d0(&var_20c, "%c:\dummy"), 0xffffffff, &var_20c, 0xffffffff)
        
        if (eax_26 != 2)
            int32_t var_10_18 = eax_24 + 0x41
            var_258c = 1
            sub_4c84d0(&var_20c, "%c:")
        else
            var_258c = eax_26
            i_1 = 0x10
        
        i = 0
        void var_2514
        void* edi_2 = &var_2514
        
        do
            int32_t i_2 = i + 1
            int32_t i_3 = i_2
            int32_t var_14_17 = data_1b8a728
            void* var_18_11 = &var_20c
            i = sub_4c3da0(sub_4c84d0(edi_2, "%s\%s.%03d"), 0xffffffff, edi_2, 0xffffffff)
            
            if (i != 1)
                break
            
            i = i_2
            esi_8 += 1
            edi_2 += 0x100
        while (i s< 0x10)
        
        if (esi_8 s<= 0)
            goto label_53e21a
        
        int32_t edi_3 = 0
        int32_t var_2594_1 = 0
        int32_t edi_5
        
        if (esi_8 s<= 0)
        label_53e4ca:
            edi_5 = 0
        else
            void* eax_28 = &var_2514
            void* var_2590_2 = &var_2514
            
            while (true)
                int32_t* esi_9 = _fopen(eax_28, "rb")
                
                if (esi_9 == 0)
                    edi_5 = 1
                    break
                
                sub_5f0cc8(esi_9, nullptr, FILE_BEGIN)
                
                if (var_258c u>= 2)
                    _fread(&var_258c, 4, 1, esi_9)
                
                char var_2584
                _fread(&var_2584, 4, 1, esi_9)
                var_2584 ^= eax_23
                char var_2583 = var_2583 ^ eax_23
                char var_2582 = var_2582 ^ eax_23
                char var_2581 = var_2581 ^ eax_23
                sub_5f0cc8(esi_9, var_2584.d, FILE_BEGIN)
                
                if (var_2594_1 s< i_1)
                    do
                        char* esi_10 = &(&var_30c)[edi_3]
                        _fread(esi_10, 1, 1, esi_9)
                        edi_3 += esi_8
                        *esi_10 ^= eax_23
                    while (edi_3 s< i_1)
                
                _fclose(esi_9)
                edi_3 = var_2594_1 + 1
                eax_28 = var_2590_2 + 0x100
                var_2594_1 = edi_3
                var_2590_2 = eax_28
                
                if (edi_3 s>= esi_8)
                    goto label_53e4ca
        
        int32_t eax_34 = sub_4cfc80(data_1b8a750)
        sub_4d1c30(eax_34, data_1b8a750, &var_10c, eax_34)
        
        if (var_258c u< 2)
            i = i_1
        else
            void var_257c
            void var_2530
            sub_4d1c30(sub_4d2660(sub_4d25d0(&var_257c, i_1), &var_10c, &var_257c, i_1), &var_2530, 
                &var_10c, 0x10)
            i = 0x10
        
        if (edi_5 s> 0)
            goto label_53e21a
        
        eax_37 = sub_4d1be0(i, &var_30c, &var_10c, i)
        goto label_53e0f3
    case 0xa
        eax_13 = sub_4d7d90(ecx)
    label_53e0f8:
        data_715e98 = eax_13
        sub_5f02dd(arg1 ^ &__saved_ebp)
        return eax_13
    case 0xb
        goto label_53e58d

int32_t eax_16 =
    sub_4c3da0(sub_4c84d0(&var_1514, "%s\%s\%s"), 0xffffffff, &var_1514, 0xffffffff) - 1
int32_t eax_17 = neg.d(eax_16)
data_715e98 = sbb.d(eax_17, eax_17, eax_16 != 0) + 1
sub_5f02dd(arg1 ^ &__saved_ebp)
return sbb.d(eax_17, eax_17, eax_16 != 0) + 1

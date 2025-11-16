// 函数: sub_446e20
// 地址: 0x446e20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_4d1ba0(eax_1, 0x12a8, &data_1332b88, 0)

if (data_108f654 != 0)
    char* __saved_ebx_1 = &data_108f654
    sub_4c84d0(&data_1332b88, "Software\%s")

HKEY var_110
enum WIN32_ERROR eax_2

if (data_1332b88 != 0)
    eax_2 = RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)

enum WIN32_ERROR result

if (data_1332b88 == 0 || eax_2 != NO_ERROR)
    result = NO_ERROR
else
    RegCloseKey(var_110)
    result = ERROR_INVALID_FUNCTION

data_1332d90 = result
__builtin_memset(&data_1333dec, 0xff, 0x1c)

if (result != NO_ERROR)
    bool cond:1_1 = data_1332b88 == 0
    enum REG_VALUE_TYPE var_114 = 0x100
    
    if (not(cond:1_1))
        enum REG_VALUE_TYPE var_10c
        void data
        
        if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110) == NO_ERROR)
            var_10c = REG_SZ
            enum WIN32_ERROR eax_3 =
                RegQueryValueExA(var_110, "DAT_EXIST", nullptr, &var_10c, &data, &var_114)
            RegCloseKey(var_110)
            
            if (eax_3 == NO_ERROR)
                result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                enum REG_VALUE_TYPE ecx_2 = data_1332d98
                
                if (result == NO_ERROR)
                    ecx_2 = var_10c
                
                data_1332d98 = ecx_2
        
        bool cond:2_1 = data_1332b88 == 0
        var_10c = 0x100
        
        if (not(cond:2_1))
            if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110) == NO_ERROR)
                var_114 = REG_SZ
                enum WIN32_ERROR eax_5 =
                    RegQueryValueExA(var_110, "BGM_EXIST", nullptr, &var_114, &data, &var_10c)
                RegCloseKey(var_110)
                
                if (eax_5 == NO_ERROR)
                    result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                    enum REG_VALUE_TYPE ecx_4 = data_1332d9c
                    
                    if (result == NO_ERROR)
                        ecx_4 = var_10c
                    
                    data_1332d9c = ecx_4
            
            bool cond:3_1 = data_1332b88 == 0
            var_10c = 0x100
            
            if (not(cond:3_1))
                if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                        == NO_ERROR)
                    var_114 = REG_SZ
                    enum WIN32_ERROR eax_7 =
                        RegQueryValueExA(var_110, "KOE_EXIST", nullptr, &var_114, &data, &var_10c)
                    RegCloseKey(var_110)
                    
                    if (eax_7 == NO_ERROR)
                        result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                        enum REG_VALUE_TYPE ecx_6 = data_1332da0
                        
                        if (result == NO_ERROR)
                            ecx_6 = var_10c
                        
                        data_1332da0 = ecx_6
                
                bool cond:4_1 = data_1332b88 == 0
                var_10c = 0x100
                
                if (not(cond:4_1))
                    if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        enum WIN32_ERROR eax_9 = RegQueryValueExA(var_110, "MOV_EXIST", nullptr, 
                            &var_114, &data, &var_10c)
                        RegCloseKey(var_110)
                        
                        if (eax_9 == NO_ERROR)
                            result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                            enum REG_VALUE_TYPE ecx_8 = data_1332da4
                            
                            if (result == NO_ERROR)
                                ecx_8 = var_10c
                            
                            data_1332da4 = ecx_8
                    
                    bool cond:5_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:5_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "SAV_FOLDER", nullptr, &var_114, &data_1332da8, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:7_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:7_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "DAT_FOLDER", nullptr, &var_114, &data_1332fb0, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:6_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:6_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "BGM_FOLDER", nullptr, &var_114, &data_13331b8, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:8_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:8_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "KOE_FOLDER", nullptr, &var_114, &data_13333c0, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:9_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:9_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "MOV_FOLDER", nullptr, &var_114, &data_13335c8, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:10_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:10_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "CD_DRIVE", nullptr, &var_114, &data_13337d0, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:11_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:11_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "DISK_MARK", nullptr, &var_114, &data_13339d8, 
                            &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:12_1 = data_1332b88 == 0
                    var_10c = 0x208
                    
                    if (not(cond:12_1) &&
                            RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                            == NO_ERROR)
                        var_114 = REG_SZ
                        RegQueryValueExA(var_110, "SAV_FOLDER_NAME", nullptr, &var_114, 
                            &data_1333be0, &var_10c)
                        RegCloseKey(var_110)
                    
                    bool cond:13_1 = data_1332b88 == 0
                    var_10c = 0x100
                    
                    if (not(cond:13_1))
                        if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                                == NO_ERROR)
                            var_114 = REG_SZ
                            enum WIN32_ERROR eax_11 = RegQueryValueExA(var_110, "SAV_FOLDER_MODE", 
                                nullptr, &var_114, &data, &var_10c)
                            RegCloseKey(var_110)
                            
                            if (eax_11 == NO_ERROR)
                                result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                                enum REG_VALUE_TYPE ecx_10 = data_1333de8
                                
                                if (result == NO_ERROR)
                                    ecx_10 = var_10c
                                
                                data_1333de8 = ecx_10
                        
                        bool cond:14_1 = data_1332b88 == 0
                        var_10c = 0x100
                        
                        if (not(cond:14_1))
                            if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, 
                                    &var_110) == NO_ERROR)
                                var_114 = REG_SZ
                                enum WIN32_ERROR eax_13 = RegQueryValueExA(var_110, "CDDAVolFade", 
                                    nullptr, &var_114, &data, &var_10c)
                                RegCloseKey(var_110)
                                
                                if (eax_13 == NO_ERROR)
                                    result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                                    enum REG_VALUE_TYPE ecx_12 = data_1333dec
                                    
                                    if (result == NO_ERROR)
                                        ecx_12 = var_10c
                                    
                                    data_1333dec = ecx_12
                            
                            bool cond:15_1 = data_1332b88 == 0
                            var_10c = 0x100
                            
                            if (not(cond:15_1))
                                if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, 
                                        &var_110) == NO_ERROR)
                                    var_114 = REG_SZ
                                    enum WIN32_ERROR eax_15 = RegQueryValueExA(var_110, 
                                        "CDDADeviceType", nullptr, &var_114, &data, &var_10c)
                                    RegCloseKey(var_110)
                                    
                                    if (eax_15 == NO_ERROR)
                                        result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                                        enum REG_VALUE_TYPE ecx_14 = data_1333df0
                                        
                                        if (result == NO_ERROR)
                                            ecx_14 = var_10c
                                        
                                        data_1333df0 = ecx_14
                                
                                bool cond:16_1 = data_1332b88 == 0
                                var_10c = 0x100
                                
                                if (not(cond:16_1))
                                    if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, 
                                            &var_110) == NO_ERROR)
                                        var_114 = REG_SZ
                                        enum WIN32_ERROR eax_17 = RegQueryValueExA(var_110, 
                                            "MoviePlayType", nullptr, &var_114, &data, &var_10c)
                                        RegCloseKey(var_110)
                                        
                                        if (eax_17 == NO_ERROR)
                                            result = sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                                            enum REG_VALUE_TYPE ecx_16 = data_1333df4
                                            
                                            if (result == NO_ERROR)
                                                ecx_16 = var_10c
                                            
                                            data_1333df4 = ecx_16
                                    
                                    bool cond:17_1 = data_1332b88 == 0
                                    var_10c = 0x100
                                    
                                    if (not(cond:17_1))
                                        if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, 
                                                KEY_ALL_ACCESS, &var_110) == NO_ERROR)
                                            var_114 = REG_SZ
                                            enum WIN32_ERROR eax_19 = RegQueryValueExA(var_110, 
                                                "MmxUse", nullptr, &var_114, &data, &var_10c)
                                            RegCloseKey(var_110)
                                            
                                            if (eax_19 == NO_ERROR)
                                                result =
                                                    sub_4d11d0(&var_10c, nullptr, &data, &var_10c)
                                                enum REG_VALUE_TYPE ecx_18 = data_1333df8
                                                
                                                if (result == NO_ERROR)
                                                    ecx_18 = var_10c
                                                
                                                data_1333df8 = ecx_18
                                        
                                        bool cond:18_1 = data_1332b88 == 0
                                        var_10c = 0x100
                                        
                                        if (not(cond:18_1))
                                            if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, 
                                                    KEY_ALL_ACCESS, &var_110) == NO_ERROR)
                                                var_114 = REG_SZ
                                                enum WIN32_ERROR eax_21 = RegQueryValueExA(var_110, 
                                                    "D3dUse", nullptr, &var_114, &data, &var_10c)
                                                RegCloseKey(var_110)
                                                
                                                if (eax_21 == NO_ERROR)
                                                    result = sub_4d11d0(&var_10c, nullptr, &data, 
                                                        &var_10c)
                                                    enum REG_VALUE_TYPE ecx_20 = data_1333dfc
                                                    
                                                    if (result == NO_ERROR)
                                                        ecx_20 = var_10c
                                                    
                                                    data_1333dfc = ecx_20
                                            
                                            bool cond:19_1 = data_1332b88 == 0
                                            var_10c = 0x100
                                            
                                            if (not(cond:19_1))
                                                if (RegOpenKeyExA(0x80000001, &data_1332b88, 0, 
                                                        KEY_ALL_ACCESS, &var_110) == NO_ERROR)
                                                    var_114 = REG_SZ
                                                    enum WIN32_ERROR eax_23 = RegQueryValueExA(
                                                        var_110, "FullScreenWidth", nullptr, 
                                                        &var_114, &data, &var_10c)
                                                    RegCloseKey(var_110)
                                                    
                                                    if (eax_23 == NO_ERROR)
                                                        result = sub_4d11d0(&var_10c, nullptr, 
                                                            &data, &var_10c)
                                                        enum REG_VALUE_TYPE ecx_22 = data_1333e00
                                                        
                                                        if (result == NO_ERROR)
                                                            ecx_22 = var_10c
                                                        
                                                        data_1333e00 = ecx_22
                                                
                                                bool cond:20_1 = data_1332b88 == 0
                                                var_10c = 0x100
                                                
                                                if (not(cond:20_1) && RegOpenKeyExA(0x80000001, 
                                                        &data_1332b88, 0, KEY_ALL_ACCESS, &var_110)
                                                        == NO_ERROR)
                                                    var_114 = REG_SZ
                                                    enum WIN32_ERROR eax_25 = RegQueryValueExA(
                                                        var_110, "FullScreenHeight", nullptr, 
                                                        &var_114, &data, &var_10c)
                                                    RegCloseKey(var_110)
                                                    
                                                    if (eax_25 == NO_ERROR)
                                                        result = sub_4d11d0(&var_10c, nullptr, 
                                                            &data, &var_10c)
                                                        enum REG_VALUE_TYPE ecx_24 = data_1333e04
                                                        
                                                        if (result == NO_ERROR)
                                                            ecx_24 = var_10c
                                                        
                                                        data_1333e04 = ecx_24
    
    char* ecx_25 = &data_1333be0
    
    while (true)
        result.b = *ecx_25
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_25 = &ecx_25[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_25 = result.b
        
        ecx_25 = &ecx_25[1]
    
    char* ecx_26 = &data_1332da8
    
    while (true)
        result.b = *ecx_26
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_26 = &ecx_26[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_26 = result.b
        
        ecx_26 = &ecx_26[1]
    
    char* ecx_27 = &data_1332fb0
    
    while (true)
        result.b = *ecx_27
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_27 = &ecx_27[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_27 = result.b
        
        ecx_27 = &ecx_27[1]
    
    char* ecx_28 = &data_13331b8
    
    while (true)
        result.b = *ecx_28
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_28 = &ecx_28[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_28 = result.b
        
        ecx_28 = &ecx_28[1]
    
    char* ecx_29 = &data_13333c0
    
    while (true)
        result.b = *ecx_29
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_29 = &ecx_29[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_29 = result.b
        
        ecx_29 = &ecx_29[1]
    
    char* ecx_30 = &data_13335c8
    
    while (true)
        result.b = *ecx_30
        
        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf) && result.b u< 0xfe)
            ecx_30 = &ecx_30[2]
            continue
        
        if (result.b == 0)
            break
        
        if (result.b u>= 0x61 && result.b u<= 0x7a)
            result.b -= 0x20
            *ecx_30 = result.b
        
        ecx_30 = &ecx_30[1]
    
    void* edx_1 = nullptr
    char* eax_27 = &data_13331b8
    
    if (data_13331b8 != 0)
        do
            ecx_30.b = *eax_27
            
            if (ecx_30.b u< 0x80)
                edx_1 += 1
                eax_27 = &eax_27[1]
            else if (ecx_30.b u< 0xa0)
                if (ecx_30.b u>= 0xfe)
                    edx_1 += 1
                    eax_27 = &eax_27[1]
                else
                    edx_1 += 2
                    eax_27 = &eax_27[2]
            else if (ecx_30.b u<= 0xdf || ecx_30.b u>= 0xfe)
                edx_1 += 1
                eax_27 = &eax_27[1]
            else
                edx_1 += 2
                eax_27 = &eax_27[2]
        while (*eax_27 != 0)
    
    if (edx_1 + 1 s> 1 && *(edx_1 + 0x13331b7) == 0x5c)
        *(edx_1 + 0x13331b7) = 0
    
    int32_t edx_3 = 0
    char* eax_28 = &data_13331b8
    
    if (data_13331b8 != 0)
        do
            ecx_30.b = *eax_28
            
            if (ecx_30.b u< 0x80)
                edx_3 += 1
                eax_28 = &eax_28[1]
            else if (ecx_30.b u< 0xa0)
                if (ecx_30.b u>= 0xfe)
                    edx_3 += 1
                    eax_28 = &eax_28[1]
                else
                    edx_3 += 2
                    eax_28 = &eax_28[2]
            else if (ecx_30.b u<= 0xdf || ecx_30.b u>= 0xfe)
                edx_3 += 1
                eax_28 = &eax_28[1]
            else
                edx_3 += 2
                eax_28 = &eax_28[2]
        while (*eax_28 != 0)
    
    int32_t eax_29 = sub_4cfc80(0x108fdac)
    
    if (edx_3 + 1 s>= eax_29)
        int32_t eax_30 = sub_4d0f10(&(&data_13331b8)[edx_3 + 1 - eax_29], 0x108fdac)
        
        if (eax_30 == 0)
            (&data_13331b8)[edx_3 + 1 - eax_29] = eax_30.b
    
    void* edx_4 = nullptr
    char* eax_31 = &data_13333c0
    char ecx_31
    
    if (data_13333c0 != 0)
        do
            ecx_31 = *eax_31
            
            if (ecx_31 u< 0x80)
                edx_4 += 1
                eax_31 = &eax_31[1]
            else if (ecx_31 u< 0xa0)
                if (ecx_31 u>= 0xfe)
                    edx_4 += 1
                    eax_31 = &eax_31[1]
                else
                    edx_4 += 2
                    eax_31 = &eax_31[2]
            else if (ecx_31 u<= 0xdf || ecx_31 u>= 0xfe)
                edx_4 += 1
                eax_31 = &eax_31[1]
            else
                edx_4 += 2
                eax_31 = &eax_31[2]
        while (*eax_31 != 0)
    
    if (edx_4 + 1 s> 1 && *(edx_4 + 0x13333bf) == 0x5c)
        *(edx_4 + 0x13333bf) = 0
    
    int32_t edx_6 = 0
    char* eax_32 = &data_13333c0
    
    if (data_13333c0 != 0)
        do
            ecx_31 = *eax_32
            
            if (ecx_31 u< 0x80)
                edx_6 += 1
                eax_32 = &eax_32[1]
            else if (ecx_31 u< 0xa0)
                if (ecx_31 u>= 0xfe)
                    edx_6 += 1
                    eax_32 = &eax_32[1]
                else
                    edx_6 += 2
                    eax_32 = &eax_32[2]
            else if (ecx_31 u<= 0xdf || ecx_31 u>= 0xfe)
                edx_6 += 1
                eax_32 = &eax_32[1]
            else
                edx_6 += 2
                eax_32 = &eax_32[2]
        while (*eax_32 != 0)
    
    int32_t eax_33 = sub_4cfc80(0x108fdf8)
    
    if (edx_6 + 1 s>= eax_33)
        int32_t eax_34 = sub_4d0f10(&(&data_13333c0)[edx_6 + 1 - eax_33], 0x108fdf8)
        
        if (eax_34 == 0)
            (&data_13333c0)[edx_6 + 1 - eax_33] = eax_34.b
    
    void* edx_7 = nullptr
    char* eax_35 = &data_13335c8
    char ecx_33
    
    if (data_13335c8 != 0)
        do
            ecx_33 = *eax_35
            
            if (ecx_33 u< 0x80)
                edx_7 += 1
                eax_35 = &eax_35[1]
            else if (ecx_33 u< 0xa0)
                if (ecx_33 u>= 0xfe)
                    edx_7 += 1
                    eax_35 = &eax_35[1]
                else
                    edx_7 += 2
                    eax_35 = &eax_35[2]
            else if (ecx_33 u<= 0xdf || ecx_33 u>= 0xfe)
                edx_7 += 1
                eax_35 = &eax_35[1]
            else
                edx_7 += 2
                eax_35 = &eax_35[2]
        while (*eax_35 != 0)
    
    if (edx_7 + 1 s> 1 && *(edx_7 + 0x13335c7) == 0x5c)
        *(edx_7 + 0x13335c7) = 0
    
    int32_t edx_9 = 0
    char* eax_36 = &data_13335c8
    
    if (data_13335c8 != 0)
        do
            ecx_33 = *eax_36
            
            if (ecx_33 u< 0x80)
                edx_9 += 1
                eax_36 = &eax_36[1]
            else if (ecx_33 u< 0xa0)
                if (ecx_33 u>= 0xfe)
                    edx_9 += 1
                    eax_36 = &eax_36[1]
                else
                    edx_9 += 2
                    eax_36 = &eax_36[2]
            else if (ecx_33 u<= 0xdf || ecx_33 u>= 0xfe)
                edx_9 += 1
                eax_36 = &eax_36[1]
            else
                edx_9 += 2
                eax_36 = &eax_36[2]
        while (*eax_36 != 0)
    
    int32_t eax_37 = sub_4cfc80(0x108fe44)
    
    if (edx_9 + 1 s>= eax_37)
        int32_t eax_38 = sub_4d0f10(&(&data_13335c8)[edx_9 + 1 - eax_37], 0x108fe44)
        
        if (eax_38 == 0)
            (&data_13335c8)[edx_9 + 1 - eax_37] = eax_38.b
    
    void* edx_10 = nullptr
    char* eax_39 = &data_1333be0
    char ecx_35
    
    if (data_1333be0 != 0)
        do
            ecx_35 = *eax_39
            
            if (ecx_35 u< 0x80)
                edx_10 += 1
                eax_39 = &eax_39[1]
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_10 += 1
                    eax_39 = &eax_39[1]
                else
                    edx_10 += 2
                    eax_39 = &eax_39[2]
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_10 += 1
                eax_39 = &eax_39[1]
            else
                edx_10 += 2
                eax_39 = &eax_39[2]
        while (*eax_39 != 0)
    
    if (edx_10 + 1 s> 1 && *(edx_10 + 0x1333bdf) == 0x5c)
        *(edx_10 + 0x1333bdf) = 0
    
    int32_t edx_12 = 0
    char* eax_40 = &data_1332da8
    
    if (data_1332da8 != 0)
        do
            ecx_35 = *eax_40
            
            if (ecx_35 u< 0x80)
                edx_12 += 1
                eax_40 = &eax_40[1]
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_12 += 1
                    eax_40 = &eax_40[1]
                else
                    edx_12 += 2
                    eax_40 = &eax_40[2]
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_12 += 1
                eax_40 = &eax_40[1]
            else
                edx_12 += 2
                eax_40 = &eax_40[2]
        while (*eax_40 != 0)
    
    if (edx_12 + 1 s> 1 && *(edx_12 + 1 + &data_1332da4:2) == 0x5c)
        *(edx_12 + 1 + &data_1332da4:2) = 0
    
    void* edx_14 = nullptr
    char* eax_41 = &data_1332fb0
    
    if (data_1332fb0 != 0)
        do
            ecx_35 = *eax_41
            
            if (ecx_35 u< 0x80)
                edx_14 += 1
                eax_41 = &eax_41[1]
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_14 += 1
                    eax_41 = &eax_41[1]
                else
                    edx_14 += 2
                    eax_41 = &eax_41[2]
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_14 += 1
                eax_41 = &eax_41[1]
            else
                edx_14 += 2
                eax_41 = &eax_41[2]
        while (*eax_41 != 0)
    
    if (edx_14 + 1 s> 1 && *(edx_14 + 0x1332faf) == 0x5c)
        *(edx_14 + 0x1332faf) = 0
    
    void* edx_16 = nullptr
    char* eax_42 = &data_13331b8
    
    if (data_13331b8 != 0)
        do
            ecx_35 = *eax_42
            
            if (ecx_35 u< 0x80)
                edx_16 += 1
                eax_42 = &eax_42[1]
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_16 += 1
                    eax_42 = &eax_42[1]
                else
                    edx_16 += 2
                    eax_42 = &eax_42[2]
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_16 += 1
                eax_42 = &eax_42[1]
            else
                edx_16 += 2
                eax_42 = &eax_42[2]
        while (*eax_42 != 0)
    
    if (edx_16 + 1 s> 1 && *(edx_16 + 0x13331b7) == 0x5c)
        *(edx_16 + 0x13331b7) = 0
    
    void* edx_18 = nullptr
    char* eax_43 = &data_13333c0
    
    if (data_13333c0 != 0)
        do
            ecx_35 = *eax_43
            
            if (ecx_35 u< 0x80)
                edx_18 += 1
                eax_43 = &eax_43[1]
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_18 += 1
                    eax_43 = &eax_43[1]
                else
                    edx_18 += 2
                    eax_43 = &eax_43[2]
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_18 += 1
                eax_43 = &eax_43[1]
            else
                edx_18 += 2
                eax_43 = &eax_43[2]
        while (*eax_43 != 0)
    
    if (edx_18 + 1 s> 1 && *(edx_18 + 0x13333bf) == 0x5c)
        *(edx_18 + 0x13333bf) = 0
    
    void* edx_20 = nullptr
    result = &data_13335c8
    
    if (data_13335c8 != 0)
        do
            ecx_35 = *result
            
            if (ecx_35 u< 0x80)
                edx_20 += 1
                result += 1
            else if (ecx_35 u< 0xa0)
                if (ecx_35 u>= 0xfe)
                    edx_20 += 1
                    result += 1
                else
                    edx_20 += 2
                    result += 2
            else if (ecx_35 u<= 0xdf || ecx_35 u>= 0xfe)
                edx_20 += 1
                result += 1
            else
                edx_20 += 2
                result += 2
        while (*result != 0)
    
    if (edx_20 + 1 s> 1 && *(edx_20 + 0x13335c7) == 0x5c)
        *(edx_20 + 0x13335c7) = 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

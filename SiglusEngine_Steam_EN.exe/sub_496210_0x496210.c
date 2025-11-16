// 函数: sub_496210
// 地址: 0x496210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* hMem_2
int32_t eax_1 = __security_cookie ^ &hMem_2
int32_t var_e24 = arg3
char var_618[0x208]
char* eax_2 = sub_4c84d0(&var_618, "save%03d.sav")

if (data_13132cc == 0 || arg4 == 0 || data_12ff38c == 0)
label_496311:
    
    if (data_187a5c0 != 0)
        if (arg2 != 0)
            sub_4a1e40(4)
        
        data_20740bc = 0
        data_20740c0 = 0
        data_20740c4 = 0
        data_20740c8 = 0
        char* var_e00 = 0x7e8
        int32_t var_dfc = 0x2712
        SYSTEMTIME systemTime
        GetLocalTime(&systemTime)
        int32_t var_de8 = 0
        void var_de4
        sub_4cfd70(&var_de4, &data_108f5cc)
        void var_d64
        void var_ce4
        void var_be3
        void var_ae2
        int32_t eax_10 = sub_4d1ba0(
            sub_4d1ba0(sub_4d1ba0(sub_4cfd70(&var_d64, 0x1606f90), 0x101, &var_ce4, 0), 0x101, 
                &var_be3, 0), 
            0x101, &var_ae2, 0)
        void var_9e0
        sub_4d1c30(eax_10, &data_1606c68, &var_9e0, 0x328)
        void var_6b8
        sub_4d1ba0(eax_10, 0x80, &var_6b8, 0)
        int32_t var_e0c = 0
        int32_t ebx
        ebx.b = 0
        BOOL var_e10 = 0
        void* var_e04
        
        if (data_1311178 == 0)
            sub_4a8860()
            
            if (data_1bfdd78 != 0)
                sub_4a8300(&var_e10, &var_e0c, &data_1bfdd78, &var_e10, &var_e04, &hMem_2)
                ebx.b = 1
            else
                sub_4a8230(0, nullptr)
        else if (data_1bfdd78 != 0)
            sub_4a8300(&var_e10, &var_e0c, &data_1bfdd78, &var_e10, &var_e04, &hMem_2)
            ebx.b = 1
        
        char* eax_12 = var_e00
        int128_t var_634 = zx.o(0)
        
        if (ebx.b == 0 && data_1bfdd70 != 0xffffffff && data_1bfdd6c == 0)
            char* ecx_11 = data_1bfdd68
            
            if (ecx_11 != 0)
                char const* const var_e24_5 = "AvgSaveThumbnail"
                sub_4cabd0(eax_12, data_1bfdd54, ecx_11, data_1bfdd58, data_1bfdd5c, data_1bfdd60, 
                    &data_1bfdd64, &data_1bfdd6c, 1, 1)
        
        HGLOBAL hMem_1 = nullptr
        HGLOBAL hMem_3 = nullptr
        int32_t ecx_13
        
        if (ebx.b == 0)
            if (data_1bfdd70 == 0xffffffff || data_1bfdd6c == 0)
                ecx_13 = var_634:0xc.d
            else
                int32_t eax_18 = data_1bfdd5c
                int32_t ecx_14 = data_1bfdd60
                var_634.d = eax_18
                var_634:4.d = ecx_14
                int32_t eax_20 = (eax_18 * ecx_14) << 2
                var_634:8.d = eax_20
                int32_t eax_21
                int32_t edx_6
                edx_6:eax_21 = sx.q(eax_20)
                int32_t eax_22 =
                    sub_4bb870(eax_21, ((edx_6 & 3) + eax_21) s>> 2, data_1bfdd6c, &hMem_3)
                hMem_1 = hMem_3
                ecx_13 = eax_22
                var_634:0xc.d = ecx_13
        else if (var_e0c == 0)
            ecx_13 = var_634:0xc.d
        else
            void* eax_13 = var_e04
            void* hMem_5 = hMem_2
            var_634.d = eax_13
            var_634:4.d = hMem_5
            int32_t eax_15 = (eax_13 * hMem_5) << 2
            var_634:8.d = eax_15
            int32_t eax_16
            int32_t edx_2
            edx_2:eax_16 = sx.q(eax_15)
            int32_t eax_17 = sub_4bb870(eax_16, ((edx_2 & 3) + eax_16) s>> 2, var_e10, &hMem_3)
            hMem_1 = hMem_3
            ecx_13 = eax_17
            var_634:0xc.d = ecx_13
        
        int32_t var_620 = 0x273990
        void* var_624 = &eax_12[ecx_13]
        int32_t eax_26 = sub_4bb050(&hMem_2, 0x273990, &data_1606c30, &hMem_2)
        int32_t eax_27 = sub_496170(&var_e00, var_e00)
        
        if (arg3 u<= 0x100)
            sub_4d1c30(eax_27, &var_e00, arg3 * 0x7e8 + 0x1ff4cd0, 0x7e8)
            *((arg3 << 2) + &data_2073cb8) = 1
        
        if (hMem_1 != 0)
            sub_496170(GlobalLock(hMem_1), var_634:0xc.d)
            GlobalUnlock(hMem_1)
            GlobalFree(hMem_1)
        
        void* hMem = hMem_2
        sub_496170(GlobalLock(hMem), eax_26)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        uint8_t* hMem_4 = data_20740c0
        uint32_t esi_1 = data_20740c8
        hMem_2 = hMem_4
        
        if (sub_495f70(hMem_4, hMem_4, &var_618, esi_1) == 0)
            sub_495f70(Sleep(0x1f4), hMem_2, &var_618, esi_1)
        
        sub_4d6c40(&data_20740bc, &data_20740c0)
        data_20740bc = 0
        data_20740c0 = 0
        data_20740c4 = 0
        data_20740c8 = 0
        sub_451c80()
        sub_4940d0()
        sub_4293e0()
        int32_t ecx_24
        
        if (ebx.b == 0)
            ecx_24 = data_1311178
            
            if (ecx_24 == 0)
                int32_t eax_32 = data_1bfdd70
                data_1b1bccc = ecx_24
                data_1bfdd78 = ecx_24.b
                
                if (eax_32 == 0)
                    eax_32 = 0xffffffff
                
                data_1bfdd70 = eax_32
        else
            sub_4d6c40(&var_e0c, &var_e10)
            ecx_24 = data_1311178
        
        if (hMem_1 == 0)
            if (data_702fc0 != 0)
                int32_t eax_38 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_38 = 0
                    
                    if (ecx_24 != 0 && data_13184e8:4 == 0)
                        eax_38 = 0
                    
                    if (data_1af174c == 0 && eax_38 != 0)
                        int32_t var_e34_3 = 0
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_38, data_72d6ac, data_719b6c, &data_614344, 
                                    nullptr), 
                                data_72d6ac, data_719b6c, &data_614344, nullptr), 
                            data_72d6ac, data_719b6c, &data_614344, nullptr)
        else if (ebx.b == 0)
            if (data_702fc0 != 0)
                int32_t eax_36 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_36 = 0
                    
                    if (ecx_24 != 0 && data_13184e8:4 == 0)
                        eax_36 = 0
                    
                    if (data_1af174c == 0 && eax_36 != 0)
                        int32_t var_e34_2 = 0
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_36, data_72d6ac, data_719b6c, &data_61af28, 
                                    nullptr), 
                                data_72d6ac, data_719b6c, &data_61af28, nullptr), 
                            data_72d6ac, data_719b6c, &data_61af28, nullptr)
        else if (data_702fc0 != 0)
            int32_t eax_33 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_33 = 0
                
                if (ecx_24 != 0 && data_13184e8:4 == 0)
                    eax_33 = 0
                
                if (data_1af174c == 0 && eax_33 != 0)
                    int32_t var_e34_1 = 0
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_33, data_72d6ac, data_719b6c, &data_61af08, nullptr), 
                            data_72d6ac, data_719b6c, &data_61af08, nullptr), 
                        data_72d6ac, data_719b6c, &data_61af08, nullptr)
        
        sub_5f02dd(eax_1 ^ &hMem_2)
        return 1
else
    if (sub_4c3da0(eax_2, 4, &var_618, 0x1e) != 1 || arg3 u> 0x100)
        goto label_496311
    
    if (sub_495490(arg3) == 0)
        goto label_496311
    
    void text
    
    if (data_12ff78c != 0)
        char* var_e24_2 = &data_12ff78c
        void* var_e28_1 = &data_12ff68c
        sub_4c84d0(&text, "%s\n\n%s")
    else
        void* var_e24_1 = &data_12ff68c
        sub_4c84d0(&text, "%s")
    
    if (MessageBoxA(data_7027bc, &text, &data_12ff58c, MB_YESNO) != IDNO)
        goto label_496311

sub_5f02dd(eax_1 ^ &hMem_2)
return 0

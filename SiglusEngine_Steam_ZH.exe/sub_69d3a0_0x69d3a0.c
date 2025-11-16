// 函数: sub_69d3a0
// 地址: 0x69d3a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c983d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
char var_874 = 0
int32_t* var_85c
int32_t* var_858
int32_t* ebx_2
bool cond:8_1

if (arg2 != 0)
    void* ecx_20 = data_bac510
    int32_t i_1 = 0xffffffff
    int32_t eax_39 = 0x7fffffff
    void* esi_7
    
    if (*(ecx_20 + 0x14354) s> 0)
        esi_7 = data_bac510
        void* ecx_21 = ecx_20 + 0x1276c
        
        do
            if (*(ecx_21 - 8) != 0)
                int32_t esi_8 = *ecx_21
                
                if (eax_39 s< arg4)
                    if (esi_8 s> eax_39 && esi_8 s<= arg4)
                        eax_39 = esi_8
                        i_1 = i
                else if (esi_8 s< eax_39)
                    eax_39 = esi_8
                    i_1 = i
                
                esi_7 = data_bac510
            
            i += 1
            ecx_21 += 0x1c
        while (i s< *(esi_7 + 0x14354))
    
    if (*(ecx_20 + 0x14354) s<= 0 || i_1 s< 0)
        *arg1 = nullptr
        arg1[1] = 0
    else
        eax_39.b = arg6 == 2
        uint32_t eax_40 = zx.d(eax_39.b)
        int32_t* var_86c
        sub_6281e0(eax_40, esi_7 + ((i_1 * 7 + 0x49d5) << 2), &var_86c, eax_40.b, 0)
        int32_t var_8_12 = 8
        int32_t* ecx_23 = var_86c
        char var_851_1
        char ecx_24
        
        if (ecx_23 == 0)
            ecx_24 = var_874
            var_851_1 = 1
        else
            ecx_24 = 2
            
            if (*sub_54d980(ecx_23, &var_85c, arg3) == 0)
                var_851_1 = 1
            else
                var_851_1 = 0
        
        if ((ecx_24 & 2) != 0)
            int32_t* ebx_3 = var_858
            
            if (ebx_3 != 0)
                bool cond:4_1 = ebx_3[1] != 1
                ebx_3[1]
                ebx_3[1] -= 1
                
                if (not(cond:4_1))
                    (*(*ebx_3 + 4))(eax_2)
                    bool cond:6_1 = ebx_3[2] != 1
                    ebx_3[2]
                    ebx_3[2] -= 1
                    
                    if (not(cond:6_1))
                        (*(*ebx_3 + 8))()
        
        if (var_851_1 == 0)
            sub_54d980(var_86c, &var_85c, arg3)
            *arg1 = var_85c
            int32_t* eax_48 = var_858
            arg1[1] = 0
            int32_t* ebx_4 = arg1[1]
            arg1[1] = eax_48
            
            if (ebx_4 != 0)
                bool cond:5_1 = ebx_4[1] != 1
                ebx_4[1]
                ebx_4[1] -= 1
                
                if (not(cond:5_1))
                    (*(*ebx_4 + 4))(eax_2)
                    bool cond:7_1 = ebx_4[2] != 1
                    ebx_4[2]
                    ebx_4[2] -= 1
                    
                    if (not(cond:7_1))
                        (*(*ebx_4 + 8))()
        else
            *arg1 = nullptr
            arg1[1] = 0
        
        int32_t var_8_13 = 0xffffffff
        int32_t* var_868
        ebx_2 = var_868
        
        if (ebx_2 != 0)
            cond:8_1 = ebx_2[1] != 1
            ebx_2[1]
            ebx_2[1] -= 1
            goto label_69d7ac
else
    void** eax_5 = data_bac4a0 + 0x178
    int16_t var_8a0
    int16_t* var_864 = &var_8a0
    int32_t var_88c_1 = 7
    int32_t var_890_1 = 0
    var_8a0 = 0
    int32_t var_8_1 = 0
    
    if (&var_8a0 != eax_5)
        i = sub_52e3c0(&var_8a0, eax_5, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    void** eax_6 = data_bac420
    sub_53a190(eax_6, i, &var_864, *eax_6, eax_6[1], var_8a0)
    int16_t* eax_7 = var_864
    
    if (eax_7 != *(data_bac420 + 4))
        sub_6c92d0(data_bac4a0 + 0x178, zx.d(*(eax_7 + 0x17)), arg4)
    
    if (data_4ecd128 == 0)
        while (*data_bac440 == 0)
            void** eax_14 = data_bac4a0 + 0x178
            int32_t var_48
            int16_t* eax_15 = sub_548cb0(eax_14, 0xaff340, &var_48, eax_14)
            int32_t var_8_3 = 1
            var_8_3.b = 2
            int16_t var_30
            enum MESSAGEBOX_RESULT eax_17 =
                sub_60e120(sub_532b80(eax_15, eax_15, &var_30, &data_aff308))
            int32_t var_1c
            
            if (var_1c u>= 8)
                j__free(var_30.d)
            
            int32_t var_8_4 = 0xffffffff
            var_1c = 7
            int32_t var_20_1 = 0
            var_30 = 0
            int32_t var_34
            
            if (var_34 u>= 8)
                j__free(var_48)
            
            if (eax_17 == IDNO)
                data_4ecd128 = 1
                break
            
            int32_t var_834_1 = 7
            int32_t var_838_1 = 0
            int16_t var_848_1 = 0
            int128_t var_828
            __builtin_memset(&var_828, 0, 0x32)
            int32_t var_84c_1 = 0
            int32_t var_830_1 = 0
            char var_82c_1 = 0
            int32_t var_7f0
            __builtin_memset(&var_7f0, 0, 0x19)
            struct NT3::C_window_base::VTable* var_850 =
                &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
            int128_t var_7d4 = zx.o(0)
            sub_6c77c0(&var_7d4:4)
            int32_t var_8_5 = 3
            var_850 = &C_cfg_wnd_modal_font::`vftable'{for `C_cfg_wnd_modal'}
            struct C_cfg_wnd_func::C_cfg_wnd_func_font::VTable* var_7b8
            sub_63d100(&var_7b8)
            int32_t var_8_6 = 4
            int32_t esi_2 = data_4ebe3ac
            sub_683ad0(0)
            var_850->__offset(0x8).d(esi_2)
            sub_683ad0(1)
            int32_t edx_1 = 0
            void** eax_20 = data_bac4a0 + 0x178
            int16_t* var_868_1 = &var_8a0
            int32_t var_88c_10 = 7
            int32_t var_890_3 = 0
            var_8a0 = 0
            var_8_6.b = 5
            
            if (&var_8a0 != eax_20)
                edx_1 = sub_52e3c0(&var_8a0, eax_20, 0, 0xffffffff)
            
            var_8_6.b = 4
            void** eax_21 = data_bac420
            sub_53a190(eax_21, edx_1, &var_864, *eax_21, eax_21[1])
            int16_t* eax_22 = var_864
            
            if (eax_22 != *(data_bac420 + 4))
                sub_6c92d0(data_bac4a0 + 0x178, zx.d(*(eax_22 + 0x17)), arg4)
            
            int32_t var_8_7 = 0xffffffff
            sub_69da40(&var_850)
            
            if (data_4ecd128 != 0)
                break
    
    int32_t* eax_26
    int32_t* ecx_12
    eax_26, ecx_12 = sub_745f3f(0x28)
    int32_t* eax_27
    
    if (eax_26 == 0)
        eax_27 = nullptr
    else
        ecx_12 = eax_26
        eax_27 = sub_6f3550(ecx_12)
    
    var_85c = eax_27
    var_858 = nullptr
    int32_t var_8_8 = 6
    int32_t* var_88c_13 = &var_858
    sub_69e2f0(eax_27, eax_27, ecx_12)
    int32_t var_8_9 = 7
    var_8a0.d = arg3
    
    if (sub_6f3dd0(var_85c, arg1.b, var_8a0, arg4, arg5, arg6, arg7, *data_bac440) != 0)
        *arg1 = var_85c
        int32_t* eax_34 = var_858
        arg1[1] = 0
        ebx_2 = arg1[1]
        var_858 = ebx_2
        arg1[1] = eax_34
        var_85c = nullptr
        int32_t var_8_11 = 0xffffffff
        
        if (ebx_2 != 0)
            cond:8_1 = ebx_2[1] != 1
            ebx_2[1]
            ebx_2[1] -= 1
        label_69d7ac:
            
            if (not(cond:8_1))
                (*(*ebx_2 + 4))(eax_2)
                int32_t esi_5 = ebx_2[2]
                ebx_2[2] -= 1
                
                if (esi_5 == 1)
                    (*(*ebx_2 + 8))()
    else
        int32_t var_8_10 = 0xffffffff
        int32_t* ebx_1 = var_858
        *arg1 = nullptr
        arg1[1] = 0
        
        if (ebx_1 != 0)
            bool cond:3_1 = ebx_1[1] != 1
            ebx_1[1]
            ebx_1[1] -= 1
            
            if (not(cond:3_1))
                (*(*ebx_1 + 4))(eax_2)
                int32_t esi_3 = ebx_1[2]
                ebx_1[2] -= 1
                
                if (esi_3 == 1)
                    (*(*ebx_1 + 8))()
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

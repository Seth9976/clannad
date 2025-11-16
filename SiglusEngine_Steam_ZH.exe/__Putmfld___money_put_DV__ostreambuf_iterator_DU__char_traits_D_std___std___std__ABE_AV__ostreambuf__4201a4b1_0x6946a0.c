// 函数: ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
// 地址: 0x6946a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8e07
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_208 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_696100(arg1, arg3, *(arg1 + 0xa2eb84), 0x100)

if (result != 0)
    int32_t var_20c_1 = 0x3c
    int32_t var_58 = 0
    int32_t var_54
    _memset(&var_54, 0, var_20c_1)
    int32_t (__fastcall* var_20c_2)(int32_t* arg1) = sub_52e8a0
    void* var_1d8
    sub_74675f(&var_1d8, 0x18, 0x10, sub_53a2c0)
    int32_t var_8_1 = 0
    int32_t* var_20c_3 = &var_58
    int16_t* var_228 = u"EXTEND_TYPE = %d"
    void var_224
    sub_52e820(&var_224, var_228)
    var_228 = arg2
    int32_t ebx
    
    if (sub_6afb70(var_228, var_224) == 0)
        void** var_20c_4 = &var_1d8
        var_228 = u"WAKU_FILE = %s"
        sub_52e820(&var_224, var_228)
        var_228 = arg2
        void* ecx_4
        
        if (sub_6afb70(var_228) == 0)
            void** var_20c_5 = &var_1d8
            var_228 = u"FILTER_FILE = %s"
            sub_52e820(&var_224, var_228)
            var_228 = arg2
            
            if (sub_6afb70(var_228) != 0)
                ecx_4 = arg3 * 0xa0e4 + 0x207a0
                goto label_6947c4
            
            int32_t var_4c
            int32_t* var_20c_7 = &var_4c
            int32_t var_50
            int32_t* var_210_4 = &var_50
            int32_t* var_214_4 = &var_54
            int32_t* var_218_2 = &var_58
            int16_t* var_230
            sub_52e820(&var_230, u"FILTER_MARGIN = %d , %d , %d , %d")
            
            if (sub_6afb70(arg2, var_230) == 0)
                int32_t* var_20c_8 = &var_4c
                int32_t* var_210_5 = &var_50
                int32_t* var_214_5 = &var_54
                int32_t* var_218_3 = &var_58
                sub_52e820(&var_230, u"FILTER_COLOR = %d , %d , %d , %d")
                
                if (sub_6afb70(arg2) == 0)
                    int32_t* var_20c_9 = &var_58
                    var_228 = u"FILTER_CONFIG_COLOR = %d"
                    sub_52e820(&var_224, var_228)
                    var_228 = arg2
                    
                    if (sub_6afb70(var_228) == 0)
                        int32_t* var_20c_10 = &var_58
                        var_228 = u"FILTER_CONFIG_TR = %d"
                        sub_52e820(&var_224, var_228)
                        var_228 = arg2
                        
                        if (sub_6afb70(var_228) == 0)
                            int32_t* var_20c_11 = &var_58
                            var_228 = u"ICON_NO = %d"
                            sub_52e820(&var_224, var_228)
                            var_228 = arg2
                            
                            if (sub_6afb70(var_228) == 0)
                                int32_t* var_20c_12 = &var_58
                                var_228 = u"PAGE_ICON_NO = %d"
                                sub_52e820(&var_224, var_228)
                                var_228 = arg2
                                
                                if (sub_6afb70(var_228) == 0)
                                    int32_t* var_20c_13 = &var_58
                                    var_228 = u"ICON_POS_TYPE = %d"
                                    sub_52e820(&var_224, var_228)
                                    var_228 = arg2
                                    
                                    if (sub_6afb70(var_228) == 0)
                                        int32_t* var_20c_14 = &var_50
                                        int32_t* var_210_6 = &var_54
                                        int32_t* var_214_6 = &var_58
                                        var_230 = u"ICON_POS = %d , %d , %d"
                                        int16_t* var_22c
                                        sub_52e820(&var_22c, var_230)
                                        var_230 = arg2
                                        
                                        if (sub_6afb70(var_230, var_22c) == 0)
                                            int32_t* var_20c_15 = &var_58
                                            var_228 = u"BTN . %d . "
                                            sub_52e820(&var_224, var_228)
                                            var_228 = arg2
                                            
                                            if (sub_6afb70(var_228) == 0)
                                                int32_t* var_20c_37 = &var_58
                                                var_228 = u"FACE . %d . "
                                                sub_52e820(&var_224, var_228)
                                                var_228 = arg2
                                                
                                                if (sub_6afb70(var_228) == 0)
                                                    ebx.b = sub_6962d0(arg1)
                                                else if (sub_696100(arg1, var_58, 
                                                        *(arg1 + 0xa2eb8c), 0x10) != 0)
                                                    char var_1f4
                                                    var_1f4.d = var_58
                                                    int32_t* var_20c_39 = &var_54
                                                    int32_t* var_210_20 = &var_58
                                                    var_22c = u"POS = %d , %d"
                                                    sub_52e820(&var_228, var_22c)
                                                    var_22c = arg2
                                                    
                                                    if (sub_6afb70(var_22c, var_228) == 0)
                                                        ebx.b = sub_6962d0(arg1)
                                                    else
                                                        int32_t edx_10 = var_54
                                                        void* ecx_116 = arg3 * 0xa0e4 + arg1
                                                        int32_t esi_7 = var_1f4.d
                                                        *(ecx_116 + (esi_7 << 3) + 0x2a7e8) = var_58
                                                        *(ecx_116 + (esi_7 << 3) + 0x2a7ec) = edx_10
                                                        ebx.b = 1
                                                else
                                                    ebx.b = 0
                                            else if (sub_696100(arg1, var_58, *(arg1 + 0xa2eb88), 
                                                    0x100) == 0)
                                                ebx.b = 0
                                            else
                                                int32_t edi_2 = var_58
                                                void** var_20c_17 = &var_1d8
                                                var_228 = u"FILE = %s"
                                                sub_52e820(&var_224, var_228)
                                                var_228 = arg2
                                                
                                                if (sub_6afb70(var_228) == 0)
                                                    int32_t* var_20c_19 = &var_58
                                                    var_228 = u"CUT_NO = %d"
                                                    sub_52e820(&var_224, var_228)
                                                    var_228 = arg2
                                                    
                                                    if (sub_6afb70(var_228) == 0)
                                                        int32_t* var_20c_20 = &var_50
                                                        int32_t* var_210_9 = &var_54
                                                        int32_t* var_214_9 = &var_58
                                                        var_230 = u"POS = %d , %d , %d"
                                                        sub_52e820(&var_22c, var_230)
                                                        var_230 = arg2
                                                        
                                                        if (sub_6afb70(var_230) == 0)
                                                            int32_t* var_20c_21 = &var_58
                                                            var_228 = u"ACTION = %d"
                                                            sub_52e820(&var_224, var_228)
                                                            var_228 = arg2
                                                            
                                                            if (sub_6afb70(var_228) == 0)
                                                                int32_t* var_20c_22 = &var_58
                                                                var_228 = u"SE = %d"
                                                                sub_52e820(&var_224, var_228)
                                                                var_228 = arg2
                                                                
                                                                if (sub_6afb70(var_228) == 0)
                                                                    int32_t* var_20c_23 = &var_54
                                                                    int32_t* var_210_10 = &var_58
                                                                    void** var_214_10 = &var_1d8
                                                                    var_230 = u"TYPE = %s , %d , %d"
                                                                    sub_52e820(&var_22c, var_230)
                                                                    var_230 = arg2
                                                                    void var_1f0
                                                                    
                                                                    if (sub_6afb70(var_230) == 0)
                                                                        int32_t* var_20c_25 = &var_58
                                                                        void** var_210_11 = &var_1d8
                                                                        var_22c = u"TYPE = %s , %d"
                                                                        sub_52e820(&var_228, var_22c)
                                                                        var_22c = arg2
                                                                        
                                                                        if (sub_6afb70(var_22c, var_228) == 0)
                                                                            void** var_20c_27 = &var_1d8
                                                                            var_228 = u"TYPE = %s"
                                                                            sub_52e820(&var_224, var_228)
                                                                            var_228 = arg2
                                                                            
                                                                            if (sub_6afb70(var_228) == 0)
                                                                                void* var_1c0
                                                                                void** var_20c_30 = &var_1c0
                                                                                void** var_210_12 = &var_1d8
                                                                                var_22c = u"CALL = %s , %s"
                                                                                sub_52e820(&var_228, var_22c)
                                                                                var_22c = arg2
                                                                                void* ecx_111
                                                                                
                                                                                if (sub_6afb70(var_22c) != 0)
                                                                                    void* esi_2 =
                                                                                        arg1 + arg3 * 0xa0e4 + edi_2 * 0xa0
                                                                                    
                                                                                    if (esi_2 + 0x20824 != &var_1d8)
                                                                                        sub_52e3c0(esi_2 + 0x20824, &var_1d8, 
                                                                                            0, 0xffffffff)
                                                                                    
                                                                                    ecx_111 = esi_2 + 0x2083c
                                                                                    goto label_69518a
                                                                                
                                                                                int32_t* var_20c_32 = &var_58
                                                                                void** var_210_14 = &var_1d8
                                                                                var_22c = u"CALL = %s , %d"
                                                                                sub_52e820(&var_228, var_22c)
                                                                                var_22c = arg2
                                                                                
                                                                                if (sub_6afb70(var_22c) == 0)
                                                                                    void** var_20c_34 = &var_1c0
                                                                                    void** var_210_16 = &var_1d8
                                                                                    var_22c = u"FRAME_ACTION = %s , %s"
                                                                                    sub_52e820(&var_228, var_22c)
                                                                                    var_22c = arg2
                                                                                    
                                                                                    if (sub_6afb70(var_22c) == 0)
                                                                                        ebx.b = sub_6962d0(arg1)
                                                                                    else
                                                                                        void* esi_6 =
                                                                                            arg1 + arg3 * 0xa0e4 + edi_2 * 0xa0
                                                                                        
                                                                                        if (esi_6 + 0x20858 != &var_1d8)
                                                                                            sub_52e3c0(esi_6 + 0x20858, &var_1d8, 
                                                                                                0, 0xffffffff)
                                                                                        
                                                                                        ecx_111 = esi_6 + 0x20870
                                                                                    label_69518a:
                                                                                        
                                                                                        if (ecx_111 == &var_1c0)
                                                                                            ebx.b = 1
                                                                                        else
                                                                                            sub_52e3c0(ecx_111, &var_1c0, 0, 
                                                                                                0xffffffff)
                                                                                            ebx.b = 1
                                                                                else
                                                                                    void* esi_4 =
                                                                                        arg1 + arg3 * 0xa0e4 + edi_2 * 0xa0
                                                                                    
                                                                                    if (esi_4 + 0x20824 != &var_1d8)
                                                                                        sub_52e3c0(esi_4 + 0x20824, &var_1d8, 
                                                                                            0, 0xffffffff)
                                                                                    
                                                                                    ebx.b = 1
                                                                                    *(esi_4 + 0x20854) = var_58
                                                                            else if (sub_5ccf10(&var_1d8, none")
                                                                                    == 0)
                                                                                if (sub_5ccf10(&var_1d8, u"save") == 0)
                                                                                    if (sub_5ccf10(&var_1d8, u"load") == 0)
                                                                                        if (sub_5ccf10(&var_1d8, return_sel")
                                                                                                == 0)
                                                                                            if (sub_5ccf10(&var_1d8, close_mwnd")
                                                                                                    == 0)
                                                                                                if (sub_5ccf10(&var_1d8, msg_log") == 0)
                                                                                                    if (sub_5ccf10(&var_1d8, koe_play")
                                                                                                            == 0)
                                                                                                        if (sub_5ccf10(&var_1d8, config") == 0)
                                                                                                            var_8_1.b = 3
                                                                                                            ebx.b = sub_696370(arg1, 
                                                                                                                sub_548cb0(&var_1d8, 0xafb274, 
                                                                                                                    &var_1f0, &var_1d8))
                                                                                                            sub_52e8a0(&var_1f0)
                                                                                                        else
                                                                                                            ebx.b = 1
                                                                                                            *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                                                + 0x20818) = 0xb
                                                                                                    else
                                                                                                        ebx.b = 1
                                                                                                        *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                                            + 0x20818) = 8
                                                                                                else
                                                                                                    ebx.b = 1
                                                                                                    *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                                        + 0x20818) = 7
                                                                                            else
                                                                                                ebx.b = 1
                                                                                                *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                                    + 0x20818) = 6
                                                                                        else
                                                                                            ebx.b = 1
                                                                                            *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                                + 0x20818) = 5
                                                                                    else
                                                                                        ebx.b = 1
                                                                                        *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                            + 0x20818) = 2
                                                                                else
                                                                                    ebx.b = 1
                                                                                    *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                        + 0x20818) = 1
                                                                            else
                                                                                ebx.b = 1
                                                                                *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                                    + 0x20818) = 0
                                                                        else if (sub_5ccf10(&var_1d8, qsave")
                                                                                == 0)
                                                                            if (sub_5ccf10(&var_1d8, u"qload") == 0)
                                                                                if (sub_5ccf10(&var_1d8, read_skip")
                                                                                        == 0)
                                                                                    if (sub_5ccf10(&var_1d8, auto_mode")
                                                                                            == 0)
                                                                                        var_8_1.b = 2
                                                                                        ebx.b = sub_696370(arg1, 
                                                                                            sub_548cb0(&var_1d8, 0xafb274, 
                                                                                                &var_1f0, &var_1d8))
                                                                                        sub_52e8a0(&var_1f0)
                                                                                    else
                                                                                        ebx.b = 1
                                                                                        void* ecx_72 =
                                                                                            arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                        int32_t eax_79 = var_58
                                                                                        *(ecx_72 + 0x20818) = 4
                                                                                        *(ecx_72 + 0x20820) = eax_79
                                                                                else
                                                                                    ebx.b = 1
                                                                                    void* ecx_68 =
                                                                                        arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                    int32_t eax_75 = var_58
                                                                                    *(ecx_68 + 0x20818) = 3
                                                                                    *(ecx_68 + 0x20820) = eax_75
                                                                            else
                                                                                ebx.b = 1
                                                                                void* ecx_64 =
                                                                                    arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                int32_t eax_71 = var_58
                                                                                *(ecx_64 + 0x20818) = 0xa
                                                                                *(ecx_64 + 0x2081c) = eax_71
                                                                        else
                                                                            ebx.b = 1
                                                                            void* ecx_60 =
                                                                                arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                            int32_t eax_67 = var_58
                                                                            *(ecx_60 + 0x20818) = 9
                                                                            *(ecx_60 + 0x2081c) = eax_67
                                                                    else
                                                                        void* ecx_45
                                                                        
                                                                        if (sub_5ccf10(&var_1d8, local_switch")
                                                                                == 0)
                                                                            if (sub_5ccf10(&var_1d8, global_switch")
                                                                                    != 0)
                                                                                ecx_45 =
                                                                                    arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                *(ecx_45 + 0x20818) = 0xe
                                                                                goto label_694cde
                                                                            
                                                                            if (sub_5ccf10(&var_1d8, local_mode")
                                                                                    != 0)
                                                                                ecx_45 =
                                                                                    arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                *(ecx_45 + 0x20818) = 0xd
                                                                                goto label_694cde
                                                                            
                                                                            if (sub_5ccf10(&var_1d8, global_mode")
                                                                                    != 0)
                                                                                ecx_45 =
                                                                                    arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                                *(ecx_45 + 0x20818) = 0xf
                                                                                goto label_694cde
                                                                            
                                                                            var_8_1.b = 1
                                                                            ebx.b = sub_696370(arg1, 
                                                                                sub_548cb0(&var_1d8, 0xafb274, 
                                                                                    &var_1f0, &var_1d8))
                                                                            sub_52e8a0(&var_1f0)
                                                                        else
                                                                            ecx_45 =
                                                                                arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                                            *(ecx_45 + 0x20818) = 0xc
                                                                        label_694cde:
                                                                            ebx.b = 1
                                                                            *(ecx_45 + 0x2081c) = var_58
                                                                            *(ecx_45 + 0x20820) = var_54
                                                                else
                                                                    ebx.b = 1
                                                                    *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                        + 0x20814) = var_58
                                                            else
                                                                ebx.b = 1
                                                                *(edi_2 * 0xa0 + arg3 * 0xa0e4 + arg1
                                                                    + 0x20810) = var_58
                                                        else
                                                            ebx.b = 1
                                                            void* ecx_34 =
                                                                arg3 * 0xa0e4 + arg1 + edi_2 * 0xa0
                                                            *(ecx_34 + 0x20804) = var_58
                                                            *(ecx_34 + 0x20808) = var_54
                                                            *(ecx_34 + 0x2080c) = var_50
                                                    else
                                                        ebx.b = 1
                                                        *(arg3 * 0xa0e4 + (edi_2 + 0x340) * 0xa0
                                                            + arg1) = var_58
                                                else
                                                    void* ecx_28 = arg3 * 0xa0e4 + arg1
                                                        + edi_2 * 0xa0 + 0x207e8
                                                    
                                                    if (ecx_28 == &var_1d8)
                                                        ebx.b = 1
                                                    else
                                                        sub_52e3c0(ecx_28, &var_1d8, 0, 0xffffffff)
                                                        ebx.b = 1
                                        else
                                            int32_t ecx_22 = var_50
                                            int32_t edx_1 = arg3 * 0xa0e4
                                            ebx.b = 1
                                            *(edx_1 + arg1 + 0x207dc) = var_58
                                            *(edx_1 + arg1 + 0x207e0) = var_54
                                            *(edx_1 + arg1 + 0x207e4) = ecx_22
                                    else
                                        ebx.b = 1
                                        *(arg3 * 0xa0e4 + arg1 + 0x207d8) = var_58
                                else
                                    ebx.b = 1
                                    *(arg3 * 0xa0e4 + arg1 + 0x207d4) = var_58
                            else
                                ebx.b = 1
                                *(arg3 * 0xa0e4 + arg1 + 0x207d0) = var_58
                        else
                            ebx.b = 1
                            *(arg3 * 0xa0e4 + arg1 + 0x207cd) = var_58 != 0
                    else
                        ebx.b = 1
                        *(arg3 * 0xa0e4 + arg1 + 0x207cc) = var_58 != 0
                else
                    char var_1f1_1 = var_4c.b
                    char var_1f2_1 = var_58.b
                    ebx.b = 1
                    char var_1f3_1 = var_54.b
                    *(arg3 * 0xa0e4 + arg1 + 0x207c8) = var_50.b.d
            else
                int32_t var_1e4_1 = var_54
                int32_t var_1e0_1 = var_50
                int32_t var_1dc_1 = var_4c
                ebx.b = 1
                *(arg3 * 0xa0e4 + arg1 + 0x207b8) = var_58.o
        else
            ecx_4 = arg3 * 0xa0e4 + 0x20788
        label_6947c4:
            void* ecx_7 = ecx_4 + arg1
            
            if (ecx_7 == &var_1d8)
                ebx.b = 1
            else
                sub_52e3c0(ecx_7, &var_1d8, 0, 0xffffffff)
                ebx.b = 1
    else
        ebx.b = 1
        *(arg3 * 0xa0e4 + arg1 + 0x20784) = var_58
    
    int32_t var_8_2 = 0xffffffff
    `eh vector vbase constructor iterator'(&var_1d8, 0x18, 0x10, sub_52e8a0)
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

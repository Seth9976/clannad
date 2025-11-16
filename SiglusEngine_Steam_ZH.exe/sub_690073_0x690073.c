// 函数: sub_690073
// 地址: 0x690073
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1.b &= 0x58
int32_t var_4 = arg1
int32_t arg_54
int32_t* var_8 = &arg_54
int32_t* var_20
sub_52e820(&var_20, u"OBJECT_DISP . %d . EXIST = %d")
void arg_94
void* entry_ebx
int32_t arg_58

if (sub_6afb70(arg3, var_20) == 0)
    void* var_4_2 = &arg_94
    int32_t* var_8_2 = &arg_54
    sub_52e820(&var_20, u"OBJECT_DISP . %d . STR = %s")
    
    if (sub_6afb70(arg3) == 0)
        int32_t* var_4_5 = &arg_58
        int32_t* var_8_4 = &arg_54
        sub_52e820(&var_20, u"GLOBAL_EXTRA_SWITCH . %d . EXIST = %d")
        
        if (sub_6afb70(arg3) == 0)
            void* var_4_7 = &arg_94
            int32_t* var_8_6 = &arg_54
            sub_52e820(&var_20, u"GLOBAL_EXTRA_SWITCH . %d . STR = %s")
            
            if (sub_6afb70(arg3) == 0)
                int32_t* var_4_9 = &arg_54
                var_20 = u"GLOBAL_EXTRA_MODE . %d . "
                void var_1c
                sub_52e820(&var_1c, var_20)
                var_20 = arg3
                
                if (sub_6afb70(var_20, var_1c) == 0)
                    int32_t* var_4_17 = &arg_54
                    var_20 = u"SLEEP . EXIST = %d"
                    sub_52e820(&var_1c, var_20)
                    var_20 = arg3
                    
                    if (sub_6afb70(var_20) == 0)
                        void* var_4_18 = &arg_94
                        var_20 = u"SLEEP . STR = %s"
                        sub_52e820(&var_1c, var_20)
                        var_20 = arg3
                        
                        if (sub_6afb70(var_20) == 0)
                            int32_t* var_4_19 = &arg_54
                            var_20 = u"NO_WIPE_ANIME . EXIST = %d"
                            sub_52e820(&var_1c, var_20)
                            var_20 = arg3
                            
                            if (sub_6afb70(var_20) == 0)
                                void* var_4_20 = &arg_94
                                var_20 = u"NO_WIPE_ANIME . STR = %s"
                                sub_52e820(&var_1c, var_20)
                                var_20 = arg3
                                
                                if (sub_6afb70(var_20) == 0)
                                    int32_t* var_4_21 = &arg_54
                                    var_20 = u"SKIP_WIPE_ANIME . EXIST = %d"
                                    sub_52e820(&var_1c, var_20)
                                    var_20 = arg3
                                    
                                    if (sub_6afb70(var_20) == 0)
                                        void* var_4_22 = &arg_94
                                        var_20 = u"SKIP_WIPE_ANIME . STR = %s"
                                        sub_52e820(&var_1c, var_20)
                                        var_20 = arg3
                                        
                                        if (sub_6afb70(var_20) == 0)
                                            int32_t* var_4_23 = &arg_54
                                            var_20 = u"NO_MWND_ANIME . EXIST = %d"
                                            sub_52e820(&var_1c, var_20)
                                            var_20 = arg3
                                            
                                            if (sub_6afb70(var_20) == 0)
                                                void* var_4_24 = &arg_94
                                                var_20 = u"NO_MWND_ANIME . STR = %s"
                                                sub_52e820(&var_1c, var_20)
                                                var_20 = arg3
                                                
                                                if (sub_6afb70(var_20) == 0)
                                                    int32_t* var_4_25 = &arg_54
                                                    var_20 = u"WHEEL_NEXT_MESSAGE . EXIST = %d"
                                                    sub_52e820(&var_1c, var_20)
                                                    var_20 = arg3
                                                    
                                                    if (sub_6afb70(var_20) == 0)
                                                        void* var_4_26 = &arg_94
                                                        var_20 = u"WHEEL_NEXT_MESSAGE . STR = %s"
                                                        sub_52e820(&var_1c, var_20)
                                                        var_20 = arg3
                                                        
                                                        if (sub_6afb70(var_20) == 0)
                                                            int32_t* var_4_27 = &arg_54
                                                            var_20 = u"KOE_DONT_STOP . EXIST = %d"
                                                            sub_52e820(&var_1c, var_20)
                                                            var_20 = arg3
                                                            
                                                            if (sub_6afb70(var_20) == 0)
                                                                void* var_4_28 = &arg_94
                                                                var_20 = u"KOE_DONT_STOP . STR = %s"
                                                                sub_52e820(&var_1c, var_20)
                                                                var_20 = arg3
                                                                
                                                                if (sub_6afb70(var_20) == 0)
                                                                    int32_t* var_4_29 = &arg_54
                                                                    var_20 =
                                                                        SKIP_UNREAD_MESSAGE . EXIST = %d"
                                                                    sub_52e820(&var_1c, var_20)
                                                                    var_20 = arg3
                                                                    
                                                                    if (sub_6afb70(var_20) == 0)
                                                                        void* var_4_30 = &arg_94
                                                                        var_20 = SKIP_UNREAD_MESSAGE . STR = %s"
                                                                        sub_52e820(&var_1c, var_20)
                                                                        var_20 = arg3
                                                                        
                                                                        if (sub_6afb70(var_20) == 0)
                                                                            int32_t* var_4_31 = &arg_54
                                                                            var_20 = PLAY_SILENT_SOUND . EXIST = %d"
                                                                            sub_52e820(&var_1c, var_20)
                                                                            var_20 = arg3
                                                                            
                                                                            if (sub_6afb70(var_20) == 0)
                                                                                void* var_4_32 = &arg_94
                                                                                var_20 = u"PLAY_SILENT_SOUND . STR = %s"
                                                                                sub_52e820(&var_1c, var_20)
                                                                                var_20 = arg3
                                                                                
                                                                                if (sub_6afb70(var_20) == 0)
                                                                                    entry_ebx.b = sub_6962d0(entry_ebx)
                                                                                else
                                                                                    sub_536260(entry_ebx + 0x1096c, &arg_94)
                                                                                    entry_ebx.b = 1
                                                                            else
                                                                                *(entry_ebx + 0x10968) = arg_54 != 0
                                                                                entry_ebx.b = 1
                                                                        else
                                                                            sub_536260(entry_ebx + 0x10950, &arg_94)
                                                                            entry_ebx.b = 1
                                                                    else
                                                                        *(entry_ebx + 0x1094c) = arg_54 != 0
                                                                        entry_ebx.b = 1
                                                                else
                                                                    sub_536260(entry_ebx + 0x10934, &arg_94)
                                                                    entry_ebx.b = 1
                                                            else
                                                                *(entry_ebx + 0x10930) = arg_54 != 0
                                                                entry_ebx.b = 1
                                                        else
                                                            sub_536260(entry_ebx + 0x10918, &arg_94)
                                                            entry_ebx.b = 1
                                                    else
                                                        *(entry_ebx + 0x10914) = arg_54 != 0
                                                        entry_ebx.b = 1
                                                else
                                                    sub_536260(entry_ebx + 0x108fc, &arg_94)
                                                    entry_ebx.b = 1
                                            else
                                                *(entry_ebx + 0x108f8) = arg_54 != 0
                                                entry_ebx.b = 1
                                        else
                                            sub_536260(entry_ebx + 0x108e0, &arg_94)
                                            entry_ebx.b = 1
                                    else
                                        *(entry_ebx + 0x108dc) = arg_54 != 0
                                        entry_ebx.b = 1
                                else
                                    sub_536260(entry_ebx + 0x108c4, &arg_94)
                                    entry_ebx.b = 1
                            else
                                *(entry_ebx + 0x108c0) = arg_54 != 0
                                entry_ebx.b = 1
                        else
                            sub_536260(entry_ebx + 0x108a8, &arg_94)
                            entry_ebx.b = 1
                    else
                        *(entry_ebx + 0x108a4) = arg_54 != 0
                        entry_ebx.b = 1
                else if (sub_696100(entry_ebx, arg_54, *(entry_ebx + 0x10510), 4) == 0)
                    entry_ebx.b = 0
                else
                    int32_t esi_1 = arg_54
                    int32_t* var_4_11 = &arg_54
                    var_20 = u"EXIST = %d"
                    sub_52e820(&var_1c, var_20)
                    var_20 = arg3
                    
                    if (sub_6afb70(var_20) == 0)
                        void* var_4_12 = &arg_94
                        var_20 = u"STR = %s"
                        sub_52e820(&var_1c, var_20)
                        var_20 = arg3
                        
                        if (sub_6afb70(var_20) == 0)
                            int32_t* var_4_13 = &arg_54
                            var_20 = u"ITEM_CNT = %d"
                            sub_52e820(&var_1c, var_20)
                            var_20 = arg3
                            
                            if (sub_6afb70(var_20) == 0)
                                void* var_4_15 = &arg_94
                                int32_t* var_8_10 = &arg_54
                                sub_52e820(&var_20, u"ITEM . %d . STR = %s")
                                
                                if (sub_6afb70(arg3) == 0)
                                    entry_ebx.b = sub_6962d0(entry_ebx)
                                else if (sub_696100(entry_ebx, arg_54, 8, 8) == 0)
                                    entry_ebx.b = 0
                                else
                                    sub_536260(esi_1 * 0xe4 + entry_ebx + arg_54 * 0x18 + 0x10538, 
                                        &arg_94)
                                    entry_ebx.b = 1
                            else if (sub_695f30(entry_ebx, arg_54, 0, 8) == 0)
                                entry_ebx.b = 0
                            else
                                *(esi_1 * 0xe4 + entry_ebx + 0x10534) = arg_54
                                entry_ebx.b = 1
                        else
                            sub_536260(entry_ebx + 0x10518 + esi_1 * 0xe4, &arg_94)
                            entry_ebx.b = 1
                    else
                        *(esi_1 * 0xe4 + entry_ebx + 0x10514) = arg_54 != 0
                        entry_ebx.b = 1
            else if (sub_696100(entry_ebx, arg_54, *(entry_ebx + 0x1049c), 4) == 0)
                entry_ebx.b = 0
            else
                sub_536260(entry_ebx + (arg_54 + 0x94f) * 0x1c, &arg_94)
                entry_ebx.b = 1
        else if (sub_696100(entry_ebx, arg_54, *(entry_ebx + 0x1049c), 4) == 0)
            entry_ebx.b = 0
        else
            *(entry_ebx + arg_54 * 0x1c + 0x104a0) = arg_58 != 0
            entry_ebx.b = 1
    else if (sub_696100(entry_ebx, arg_54, *(entry_ebx + 0x10428), 4) == 0)
        entry_ebx.b = 0
    else
        sub_536260(entry_ebx + ((arg_54 * 7 + 0x410c) << 2), &arg_94)
        entry_ebx.b = 1
else if (sub_696100(entry_ebx, arg_54, *(entry_ebx + 0x10428), 4) == 0)
    entry_ebx.b = 0
else
    *(entry_ebx + arg_54 * 0x1c + 0x1042c) = arg_58 != 0
    entry_ebx.b = 1
int32_t arg_228 = 0xffffffff
`eh vector vbase constructor iterator'(&arg_94, 0x18, 0x10, sub_52e8a0)
int32_t result
result.b = entry_ebx.b
TEB* fsbase
fsbase->NtTib.ExceptionList = arg8
void arg_10
sub_745f2b(arg7 ^ &arg_10)
*arg2
return result

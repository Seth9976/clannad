// 函数: sub_690074
// 地址: 0x690074
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t arg_58
int32_t* var_4 = &arg_58
int32_t* var_1c
sub_52e820(&var_1c, u"OBJECT_DISP . %d . EXIST = %d")
void arg_98
void* entry_ebx

if (sub_6afb70(arg2, var_1c) == 0)
    int32_t* var_4_2 = &arg_58
    sub_52e820(&var_1c, u"OBJECT_DISP . %d . STR = %s")
    
    if (sub_6afb70(arg2) == 0)
        int32_t* var_4_4 = &arg_58
        sub_52e820(&var_1c, u"GLOBAL_EXTRA_SWITCH . %d . EXIST = %d")
        
        if (sub_6afb70(arg2) == 0)
            int32_t* var_4_6 = &arg_58
            sub_52e820(&var_1c, u"GLOBAL_EXTRA_SWITCH . %d . STR = %s")
            
            if (sub_6afb70(arg2) == 0)
                var_1c = u"GLOBAL_EXTRA_MODE . %d . "
                void var_18
                sub_52e820(&var_18, var_1c)
                var_1c = arg2
                
                if (sub_6afb70(var_1c, var_18) == 0)
                    var_1c = u"SLEEP . EXIST = %d"
                    sub_52e820(&var_18, var_1c)
                    var_1c = arg2
                    
                    if (sub_6afb70(var_1c) == 0)
                        var_1c = u"SLEEP . STR = %s"
                        sub_52e820(&var_18, var_1c)
                        var_1c = arg2
                        
                        if (sub_6afb70(var_1c) == 0)
                            var_1c = u"NO_WIPE_ANIME . EXIST = %d"
                            sub_52e820(&var_18, var_1c)
                            var_1c = arg2
                            
                            if (sub_6afb70(var_1c) == 0)
                                var_1c = u"NO_WIPE_ANIME . STR = %s"
                                sub_52e820(&var_18, var_1c)
                                var_1c = arg2
                                
                                if (sub_6afb70(var_1c) == 0)
                                    var_1c = u"SKIP_WIPE_ANIME . EXIST = %d"
                                    sub_52e820(&var_18, var_1c)
                                    var_1c = arg2
                                    
                                    if (sub_6afb70(var_1c) == 0)
                                        var_1c = u"SKIP_WIPE_ANIME . STR = %s"
                                        sub_52e820(&var_18, var_1c)
                                        var_1c = arg2
                                        
                                        if (sub_6afb70(var_1c) == 0)
                                            var_1c = u"NO_MWND_ANIME . EXIST = %d"
                                            sub_52e820(&var_18, var_1c)
                                            var_1c = arg2
                                            
                                            if (sub_6afb70(var_1c) == 0)
                                                var_1c = u"NO_MWND_ANIME . STR = %s"
                                                sub_52e820(&var_18, var_1c)
                                                var_1c = arg2
                                                
                                                if (sub_6afb70(var_1c) == 0)
                                                    var_1c = u"WHEEL_NEXT_MESSAGE . EXIST = %d"
                                                    sub_52e820(&var_18, var_1c)
                                                    var_1c = arg2
                                                    
                                                    if (sub_6afb70(var_1c) == 0)
                                                        var_1c = u"WHEEL_NEXT_MESSAGE . STR = %s"
                                                        sub_52e820(&var_18, var_1c)
                                                        var_1c = arg2
                                                        
                                                        if (sub_6afb70(var_1c) == 0)
                                                            var_1c = u"KOE_DONT_STOP . EXIST = %d"
                                                            sub_52e820(&var_18, var_1c)
                                                            var_1c = arg2
                                                            
                                                            if (sub_6afb70(var_1c) == 0)
                                                                var_1c = u"KOE_DONT_STOP . STR = %s"
                                                                sub_52e820(&var_18, var_1c)
                                                                var_1c = arg2
                                                                
                                                                if (sub_6afb70(var_1c) == 0)
                                                                    var_1c =
                                                                        SKIP_UNREAD_MESSAGE . EXIST = %d"
                                                                    sub_52e820(&var_18, var_1c)
                                                                    var_1c = arg2
                                                                    
                                                                    if (sub_6afb70(var_1c) == 0)
                                                                        var_1c = SKIP_UNREAD_MESSAGE . STR = %s"
                                                                        sub_52e820(&var_18, var_1c)
                                                                        var_1c = arg2
                                                                        
                                                                        if (sub_6afb70(var_1c) == 0)
                                                                            var_1c = PLAY_SILENT_SOUND . EXIST = %d"
                                                                            sub_52e820(&var_18, var_1c)
                                                                            var_1c = arg2
                                                                            
                                                                            if (sub_6afb70(var_1c) == 0)
                                                                                var_1c = u"PLAY_SILENT_SOUND . STR = %s"
                                                                                sub_52e820(&var_18, var_1c)
                                                                                var_1c = arg2
                                                                                
                                                                                if (sub_6afb70(var_1c) == 0)
                                                                                    entry_ebx.b = sub_6962d0(entry_ebx)
                                                                                else
                                                                                    sub_536260(entry_ebx + 0x1096c, &arg_98)
                                                                                    entry_ebx.b = 1
                                                                            else
                                                                                *(entry_ebx + 0x10968) = arg_58 != 0
                                                                                entry_ebx.b = 1
                                                                        else
                                                                            sub_536260(entry_ebx + 0x10950, &arg_98)
                                                                            entry_ebx.b = 1
                                                                    else
                                                                        *(entry_ebx + 0x1094c) = arg_58 != 0
                                                                        entry_ebx.b = 1
                                                                else
                                                                    sub_536260(entry_ebx + 0x10934, &arg_98)
                                                                    entry_ebx.b = 1
                                                            else
                                                                *(entry_ebx + 0x10930) = arg_58 != 0
                                                                entry_ebx.b = 1
                                                        else
                                                            sub_536260(entry_ebx + 0x10918, &arg_98)
                                                            entry_ebx.b = 1
                                                    else
                                                        *(entry_ebx + 0x10914) = arg_58 != 0
                                                        entry_ebx.b = 1
                                                else
                                                    sub_536260(entry_ebx + 0x108fc, &arg_98)
                                                    entry_ebx.b = 1
                                            else
                                                *(entry_ebx + 0x108f8) = arg_58 != 0
                                                entry_ebx.b = 1
                                        else
                                            sub_536260(entry_ebx + 0x108e0, &arg_98)
                                            entry_ebx.b = 1
                                    else
                                        *(entry_ebx + 0x108dc) = arg_58 != 0
                                        entry_ebx.b = 1
                                else
                                    sub_536260(entry_ebx + 0x108c4, &arg_98)
                                    entry_ebx.b = 1
                            else
                                *(entry_ebx + 0x108c0) = arg_58 != 0
                                entry_ebx.b = 1
                        else
                            sub_536260(entry_ebx + 0x108a8, &arg_98)
                            entry_ebx.b = 1
                    else
                        *(entry_ebx + 0x108a4) = arg_58 != 0
                        entry_ebx.b = 1
                else if (sub_696100(entry_ebx, arg_58, *(entry_ebx + 0x10510), 4) == 0)
                    entry_ebx.b = 0
                else
                    int32_t esi_1 = arg_58
                    var_1c = u"EXIST = %d"
                    sub_52e820(&var_18, var_1c)
                    var_1c = arg2
                    
                    if (sub_6afb70(var_1c) == 0)
                        var_1c = u"STR = %s"
                        sub_52e820(&var_18, var_1c)
                        var_1c = arg2
                        
                        if (sub_6afb70(var_1c) == 0)
                            var_1c = u"ITEM_CNT = %d"
                            sub_52e820(&var_18, var_1c)
                            var_1c = arg2
                            
                            if (sub_6afb70(var_1c) == 0)
                                int32_t* var_4_10 = &arg_58
                                sub_52e820(&var_1c, u"ITEM . %d . STR = %s")
                                
                                if (sub_6afb70(arg2) == 0)
                                    entry_ebx.b = sub_6962d0(entry_ebx)
                                else if (sub_696100(entry_ebx, arg_58, 8, 8) == 0)
                                    entry_ebx.b = 0
                                else
                                    sub_536260(esi_1 * 0xe4 + entry_ebx + arg_58 * 0x18 + 0x10538, 
                                        &arg_98)
                                    entry_ebx.b = 1
                            else if (sub_695f30(entry_ebx, arg_58, 0, 8) == 0)
                                entry_ebx.b = 0
                            else
                                *(esi_1 * 0xe4 + entry_ebx + 0x10534) = arg_58
                                entry_ebx.b = 1
                        else
                            sub_536260(entry_ebx + 0x10518 + esi_1 * 0xe4, &arg_98)
                            entry_ebx.b = 1
                    else
                        *(esi_1 * 0xe4 + entry_ebx + 0x10514) = arg_58 != 0
                        entry_ebx.b = 1
            else if (sub_696100(entry_ebx, arg_58, *(entry_ebx + 0x1049c), 4) == 0)
                entry_ebx.b = 0
            else
                sub_536260(entry_ebx + (arg_58 + 0x94f) * 0x1c, &arg_98)
                entry_ebx.b = 1
        else if (sub_696100(entry_ebx, arg_58, *(entry_ebx + 0x1049c), 4) == 0)
            entry_ebx.b = 0
        else
            *(entry_ebx + arg_58 * 0x1c + 0x104a0) = arg6 != 0
            entry_ebx.b = 1
    else if (sub_696100(entry_ebx, arg_58, *(entry_ebx + 0x10428), 4) == 0)
        entry_ebx.b = 0
    else
        sub_536260(entry_ebx + ((arg_58 * 7 + 0x410c) << 2), &arg_98)
        entry_ebx.b = 1
else if (sub_696100(entry_ebx, arg_58, *(entry_ebx + 0x10428), 4) == 0)
    entry_ebx.b = 0
else
    *(entry_ebx + arg_58 * 0x1c + 0x1042c) = arg6 != 0
    entry_ebx.b = 1

int32_t arg_22c = 0xffffffff
`eh vector vbase constructor iterator'(&arg_98, 0x18, 0x10, sub_52e8a0)
int32_t result
result.b = entry_ebx.b
TEB* fsbase
fsbase->NtTib.ExceptionList = arg8
void arg_14
sub_745f2b(arg7 ^ &arg_14)
*arg1
return result

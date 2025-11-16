// 函数: sub_5718d0
// 地址: 0x5718d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
char* lpString = arg3
int32_t var_c = 0

if (arg6 != 0xffffffff && arg7 != 0xffffffff && arg8 != 0xffffffff)
    if (arg9 != 0xffffffff)
        eax = 1
    
    var_c = eax

int32_t eax_2 = data_20f0284 + arg5
SetTextColor(data_20f0288, 0)
int32_t eax_3 = SetBkMode(data_20f0288, 1)
int32_t ecx = 0
int32_t var_8 = 0

if (*lpString == 0)
    *arg2 = lpString
    return eax_3

int32_t ebx_1 = data_20f0280
int32_t x = arg4

do
    eax_3.b = *lpString
    
    if (eax_3.b u< 0x80)
    label_5719cb:
        
        if (eax_3.b == 0xd && lpString[1] == 0xa)
            *arg2 = &lpString[2]
            return arg2
        
        if (eax_3.b == 0xa)
            *arg2 = &lpString[1]
            return arg2
        
        if (eax_3.b != 9)
            if (x s< data_20f028c)
                if (var_c == 0 || (arg5 s>= arg7 && arg5 s<= arg9))
                label_571a63:
                    int32_t eax_17 = ebx_1 + x
                    
                    if (var_c == 0 || (x s>= arg6 && x s<= arg8))
                    label_571a87:
                        TextOutA(data_20f0288, x, arg5, lpString, 1)
                        ebx_1 = data_20f0280
                        ecx = var_8
                    else if (eax_17 s>= arg6 && eax_17 s<= arg8)
                        goto label_571a87
                else if (eax_2 s>= arg7 && eax_2 s<= arg9)
                    goto label_571a63
            
            ecx += 1
            x += ebx_1 s>> 1
            lpString = &lpString[1]
            var_8 = ecx
        else
            int32_t edx_1 = 0
            int32_t var_18_1 = 0
            int32_t eax_5 = ecx & 0x80000003
            
            if (eax_5 s< 0)
                eax_5 = ((eax_5 - 1) | 0xfffffffc) + 1
            
            int32_t eax_8 = 0
            
            if (4 - eax_5 s>= 2)
                int32_t edx_2 = (((4 - eax_5 - 2) u>> 1) + 1) * 2
                var_8 += edx_2
                edx_1 = (ebx_1 s>> 1) * (((4 - eax_5 - 2) u>> 1) + 1)
                eax_8 = edx_2
                var_18_1 = edx_1
            
            ecx = var_8
            
            if (eax_8 s< 4 - eax_5)
                x += ebx_1 s>> 1
                ecx += 1
                var_8 = ecx
            
            x += var_18_1 + edx_1
            lpString = &lpString[1]
    else
        if (eax_3.b u< 0xa0)
            if (eax_3.b u>= 0xfe)
                goto label_5719cb
        else if (eax_3.b u<= 0xdf || eax_3.b u>= 0xfe)
            goto label_5719cb
        
        if (x s< data_20f028c)
            if (var_c == 0 || (arg5 s>= arg7 && arg5 s<= arg9))
            label_571983:
                eax_3 = ebx_1 + x
                
                if (var_c == 0 || (x s>= arg6 && x s<= arg8))
                label_5719a7:
                    TextOutA(data_20f0288, x, arg5, lpString, 2)
                    ebx_1 = data_20f0280
                    ecx = var_8
                else if (eax_3 s>= arg6 && eax_3 s<= arg8)
                    goto label_5719a7
            else if (eax_2 s>= arg7 && eax_2 s<= arg9)
                goto label_571983
        
        x += ebx_1
        ecx += 2
        lpString = &lpString[2]
        var_8 = ecx
while (*lpString != 0)

*arg2 = lpString
return arg2

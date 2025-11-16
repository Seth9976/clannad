// 函数: sub_4eeae0
// 地址: 0x4eeae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg5
void* var_10 = arg2
void* var_14 = arg3
data_1af1728 = 0
char var_6 = 1
bool cond:4_1

if (ebx - 2 u<= 5)
    switch (ebx)
        case 2
            if (data_7035c8 == 0 || data_976f94 == 0)
                var_6 = 0
            else
                void* eax_3 = data_976f9c
                
                if (data_12a2930 == 0)
                    cond:4_1 = *(eax_3 + 0x1c8) == 1
                    goto label_4eebbc
                
                if (*(eax_3 + 0x1c8) == 2)
                    var_6 = 0
        case 3, 4, 5, 7
            if (data_7035c8 == 0 || data_976f94 == 0)
                var_6 = 0
            else
                void* eax_1 = data_976f9c
                
                if (data_12a292c == 0)
                    cond:4_1 = *(eax_1 + 0x1c4) == 1
                label_4eebbc:
                    
                    if (not(cond:4_1))
                        var_6 = 0
                else if (*(eax_1 + 0x1c4) == 2)
                    var_6 = 0
        case 6
            if (data_7035c8 == 0 || data_976f94 == 0)
                var_6 = 0
            else
                void* eax_2 = data_976f9c
                
                if (data_12a2934 == 0)
                    cond:4_1 = *(eax_2 + 0x1cc) == 1
                    goto label_4eebbc
                
                if (*(eax_2 + 0x1cc) == 2)
                    var_6 = 0

if (ebx s>= 3 && (ebx s<= 5 || ebx == 7))
    sub_5800d0(arg4)
    
    if (arg6 != 0)
        sub_5757a0(arg6)

if (arg4 u<= 0x3f && *(arg4 * 0x3920 + &data_f8d2e0) != 0)
    arg5:3.b = 1

if (arg4 u> 0x3f || *(arg4 * 0x3920 + &data_f8d2e0) == 0 || data_187c51f != 0)
    arg5:3.b = 0

if (arg6 != 0)
    arg3, arg2 = sub_5757f0(arg6)

if (ebx s>= 2 && (ebx s<= 5 || ebx == 7))
    arg2.b = 1
    arg3.b = 0
    sub_57fcf0(arg3, arg2.b)
    void* eax_5 = &data_f8d300
    arg3 = 0x10
    void* i
    
    do
        if (*(eax_5 + 8) == 0 || *eax_5 != 0)
            *(eax_5 - 0x20) = 0
        
        if (*(eax_5 + 0x3928) == 0 || *(eax_5 + 0x3920) != 0)
            *(eax_5 + 0x3900) = 0
        
        if (*(eax_5 + 0x7248) == 0 || *(eax_5 + 0x7240) != 0)
            *(eax_5 + 0x7220) = 0
        
        if (*(eax_5 + 0xab68) == 0 || *(eax_5 + 0xab60) != 0)
            *(eax_5 + 0xab40) = 0
        
        eax_5 += 0xe480
        i = arg3
        arg3 -= 1
    while (i != 1)
    
    if (data_187c51f == arg3.b)
        sub_57d340()

if (arg5:3.b != 0 && arg4 u<= 0x3f)
    bool cond:5_1 = *(arg4 * 0x3920 + &data_f8d308) != 0
    *(arg4 * 0x3920 + &data_f8d2e0) = 1
    
    if (not(cond:5_1))
        data_13701d8 = 0
        data_137010c = 1
    
    *(arg4 * 0x3920 + &data_f8d308) = 1

if (arg6 != 0)
    sub_575840(arg6)

void* result

if (var_6 == 0)
    result = ebx - 2
    arg3.b = 1
else
    int32_t ecx_1
    ecx_1.b = ebx == 2
    int32_t eax_8
    eax_8, arg3 = sub_57fac0(ecx_1)
    
    if (eax_8 == 0)
        if (data_1311178 == 0)
            if (data_13926a4 == 0)
                if (data_13926a0 == 0)
                    if (data_702fe4 != 0 || data_702fd8 != 0 || data_702fcc != 0)
                        if (data_702fc0 != 0)
                            sub_4ee6f0(ebx)
                    else if (data_91e8fc s< 0x80)
                        int32_t eax_9
                        eax_9, arg3 = sub_475310()
                        
                        if (eax_9 == 0)
                            *(var_14 + 8) = *(var_10 + 0x20) - *(var_10 + 0x18)
                            sub_4977f0(ebx, arg7)
                        else if (data_702fc0 != 0)
                            sub_4ee7c0(ebx, eax_9)
                    else if (data_702fc0 != 0)
                        sub_4ee940(ebx)
                else if (data_702fc0 != 0)
                    sub_4ee620(ebx)
            else if (data_702fc0 != 0)
                sub_4ee550(ebx)
        else if (data_702fc0 != 0)
            sub_4ee480(ebx)
        
        result = ebx - 2
        arg3.b = 1
    else
        if (data_702fc0 != 0)
            sub_4eea10(ebx)
        
        result = ebx - 2
        
        if (result u> 5)
            arg3.b = 1
        else
            switch (result)
                case nullptr
                    data_1af172c = 1
                    arg3.b = 1
                case 1, 2, 3, 5
                    arg3.b = 0
                case 4
                    arg3.b = 1

switch (result)
    case nullptr
        if (arg3.b != 0)
            if (arg4 u<= 0x3f)
                *(arg4 * 0x3920 + &data_f8d30c) = 1
            
            if (arg6 != 0)
                sub_575890(arg6)
        
        goto label_4eeede
    case 1, 2, 5
        if (arg3.b != 0)
            if (arg4 u<= 0x3f)
                result = arg4 * 0x3920
                *(result + &data_f8d30c) = 1
            
            if (arg6 != 0)
                result = sub_575890(arg6)
        
        if (data_187c51f == 0)
        label_4eeede:
            result = sub_57d490(arg4)
            
            if (arg6 != 0)
                return sub_5758c0(arg6)
    case 3
        if (arg3.b != 0)
            if (arg4 u<= 0x3f)
                result = arg4 * 0x3920
                *(result + &data_f8d30c) = 1
            
            if (arg6 != 0)
                return sub_575890(arg6)

return result

// 函数: sub_6d5de0
// 地址: 0x6d5de0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = arg4
int32_t eax

if ((ebx.b & 2) == 0)
    arg1.b = arg2[3]
    
    if (arg1.b == 0 || arg1.b u> *(arg3 + 0x151))
        return sub_6d4470(arg3, "Invalid sBIT depth specified")
    
    arg4.b = arg1.b
    eax = 1
else
    arg1.b = 8
    
    if (ebx != 3)
        arg1.b = *(arg3 + 0x151)
    
    arg1:1.b = *arg2
    
    if (arg1:1.b == 0 || arg1:1.b u> arg1.b)
        return sub_6d4470(arg3, "Invalid sBIT depth specified")
    
    ebx.b = arg2[1]
    var_8:3.b = ebx.b
    
    if (ebx.b == 0 || ebx.b u> arg1.b)
        return sub_6d4470(arg3, "Invalid sBIT depth specified")
    
    ebx.b = arg2[2]
    var_8:2.b = ebx.b
    bool cond:0_1 = ebx.b == 0
    ebx = arg4
    
    if (cond:0_1 || var_8:2.b u> arg1.b)
        return sub_6d4470(arg3, "Invalid sBIT depth specified")
    
    arg1.b = var_8:3.b
    arg4:1.b = arg1.b
    arg1.b = var_8:2.b
    arg4.b = arg1:1.b
    arg4:2.b = arg1.b
    eax = 3

if ((ebx.b & 4) == 0)
    return sub_6d4c10(&arg4, 0x73424954, arg3, &arg4, eax)

arg2.b = arg2[4]

if (arg2.b == 0 || arg2.b u> *(arg3 + 0x151))
    return sub_6d4470(arg3, "Invalid sBIT depth specified")

*(&arg4 + eax) = arg2.b
return sub_6d4c10(&arg4, 0x73424954, arg3, &arg4, eax + 1)

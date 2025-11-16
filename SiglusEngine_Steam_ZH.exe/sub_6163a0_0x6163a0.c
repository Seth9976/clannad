// 函数: sub_6163a0
// 地址: 0x6163a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (arg2 u> 0x111)
    if (arg2 != 0x113)
    label_616450:
        
        if (arg2 == 0x10)
            EndDialog(*(arg1 + 4), 0)
            return 0
    else if (sub_616730(arg1) == 0)
        return 0
else if (arg2 == 0x111)
    uint32_t eax_4 = zx.d(arg3.w)
    
    if (eax_4 == 2)
        EndDialog(*(arg1 + 4), 2)
        return 0
    
    if (eax_4 == 0x4da)
        EndDialog(*(arg1 + 4), 1)
        return 0
    
    if (eax_4 == 0x4db)
        EndDialog(*(arg1 + 4), 2)
        return 0
else
    if (arg2 == 0x10)
        EndDialog(*(arg1 + 4), 2)
        return 0
    
    if (arg2 != 0x110)
        goto label_616450
    
    if (sub_616470(arg1) == 0)
        return 0

return sub_6c4530(arg1, arg2, arg3, arg4)

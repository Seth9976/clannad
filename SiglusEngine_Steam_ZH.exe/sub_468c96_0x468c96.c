// 函数: sub_468c96
// 地址: 0x468c96
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x37] == 0)
    sub_46691d(arg1, "NULL row buffer")
    noreturn

if ((*(arg1 + 0x61) & 0x10) != 0)
    if (arg1[0x3e].b != 3)
        void* var_c_2
        
        if (*(arg1 + 0x10a) == 0)
            var_c_2 = nullptr
        else
            var_c_2 = &arg1[0x58]
        
        sub_46840f(&arg1[0x3c], arg1[0x37] + 1, var_c_2)
    else
        sub_468204(&arg1[0x3c], arg1[0x37] + 1, arg1[0x41], arg1[0x57], zx.d(*(arg1 + 0x10a)))

if ((*(arg1 + 0x61) & 0x20) != 0 && *(arg1 + 0x116) != 3)
    sub_467eb2(&arg1[0x3c], arg1[0x37] + 1, arg1[0x4e], arg1[0x51], (arg1[0x4b]).b)

if ((*(arg1 + 0x61) & 4) != 0)
    sub_467c33(&arg1[0x3c], arg1[0x37] + 1)

if ((arg1[0x18].b & 0x40) != 0)
    sub_468768(&arg1[0x3c], arg1[0x37] + 1, arg1[0x5d], arg1[0x5e])
    
    if (arg1[0x3d] == 0)
        sub_46691d(arg1, "png_do_dither returned rowbytes=0")
        noreturn

if ((arg1[0x18].b & 8) != 0)
    sub_467ab5(&arg1[0x3c], arg1[0x37] + 1, arg1 + 0x155)

if ((arg1[0x18].b & 4) != 0)
    sub_4679a2(&arg1[0x3c], arg1[0x37] + 1)

if ((arg1[0x18].b & 1) != 0)
    sub_4677ab(&arg1[0x3c], arg1[0x37] + 1)

if ((*(arg1 + 0x61) & 0x80) != 0)
    sub_467c7d(&arg1[0x3c], arg1[0x37] + 1, zx.d(*(arg1 + 0x11e)), (arg1[0x17]).b)

if ((arg1[0x18].b & 0x10) != 0)
    sub_467778(&arg1[0x3c], arg1[0x37] + 1)

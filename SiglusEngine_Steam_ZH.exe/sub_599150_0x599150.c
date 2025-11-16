// 函数: sub_599150
// 地址: 0x599150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_4
bool cond:0_1

if (zx.d(arg2.w) - 0x40a u<= 0x63)
    switch (arg2.w)
        case 0x40a
            sub_65fc50()
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 1
            return eax_2
        case 0x40d
            eax_4 = sub_59a130(arg1)
            sub_65fcb0(sub_59a0b0(arg1), eax_4)
        case 0x46c
            uint32_t edx_1 = arg2 u>> 0x10
            
            if (edx_1 != 1)
                cond:0_1 = edx_1 != 2
                goto label_59919e
            
            sub_5992f0(arg1)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        case 0x46d
            cond:0_1 = arg2 u>> 0x10 != 2
        label_59919e:
            
            if (not(cond:0_1))
                eax_4 = sub_59a130(arg1)
                sub_65fcb0(sub_59a0b0(arg1), eax_4)
uint32_t eax_1
eax_1.b = 1
return eax_1

// 函数: sub_6cc380
// 地址: 0x6cc380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = arg1 u>> 0x18

if (eax == 0x20 || (eax u>= 0x30 && eax u<= 0x39) || (eax u>= 0x41 && eax u<= 0x5a))
label_6cc3ad:
    uint32_t eax_3 = zx.d((arg1 u>> 0x10).b)
    
    if (eax_3 == 0x20 || (eax_3 u>= 0x30 && eax_3 u<= 0x39) || (eax_3 u>= 0x41 && eax_3 u<= 0x5a))
    label_6cc3da:
        uint32_t eax_6 = zx.d((arg1 u>> 8).b)
        
        if (eax_6 == 0x20 || (eax_6 u>= 0x30 && eax_6 u<= 0x39)
            || (eax_6 u>= 0x41 && eax_6 u<= 0x5a))
        label_6cc405:
            
            if (sub_6cc350(zx.d(arg1.b)) != 0)
                return 1
        else if (eax_6 u>= 0x61 && eax_6 u<= 0x7a)
            goto label_6cc405
    else if (eax_3 u>= 0x61 && eax_3 u<= 0x7a)
        goto label_6cc3da
else if (eax u>= 0x61 && eax u<= 0x7a)
    goto label_6cc3ad

return 0

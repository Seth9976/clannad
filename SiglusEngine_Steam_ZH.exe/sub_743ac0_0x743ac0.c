// 函数: sub_743ac0
// 地址: 0x743ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* edi = arg6
int32_t var_8 = 0

if (edi == 0)
    void var_18
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_743dc0(esi, &var_18, 0x10000, edi)
    
    if (eax_1 == 0xffffff80 && edx_1 == 0xffffffff)
        return eax_1
    
    if (edx_1 s<= 0 && (edx_1 s< 0 || eax_1 u< 0))
        return 0xffffff7c
    
    edi = &var_18

sub_99b870(arg2)
sub_99b930(arg3)
esi[0x16] = 2
void var_38
int32_t esi_5

if (sub_6e4700(edi) != 0)
    int32_t* ebx_1 = arg4
    int32_t i
    
    do
        if (ebx_1 != 0)
            int32_t* ebx_2 = *ebx_1
            int32_t esi_2 = *arg5
            uint32_t eax_4 = sub_6e47d0(edi)
            
            if (ebx_2 != 0 && esi_2 != 0)
                while (true)
                    esi_2 -= 1
                    
                    if (*ebx_2 == eax_4)
                        int32_t eax_21 = *arg4
                        
                        if (eax_21 != 0)
                            _free(eax_21)
                        
                        *arg4 = 0
                        *arg5 = 0
                        break
                    
                    ebx_2 = &ebx_2[1]
                    
                    if (esi_2 == 0)
                        goto label_743b71
                
                goto label_743c18
            
        label_743b71:
            uint32_t eax_5 = sub_6e47d0(edi)
            ebx_1 = arg4
            *arg5 += 1
            int32_t edx_2 = *ebx_1
            int32_t eax_7
            
            if (edx_2 == 0)
                eax_7 = _malloc(4)
            else
                eax_7 = _realloc(edx_2, *arg5 << 2)
            
            *ebx_1 = eax_7
            *(*ebx_1 + (*arg5 << 2) - 4) = eax_5
            esi = arg1
        
        if (esi[0x16] s< 3)
            sub_6e51f0(&esi[0x1e], sub_6e47d0(edi))
            sub_6e4e20(&esi[0x1e], edi)
            
            if (sub_6e5340(&esi[0x1e], &var_38) s<= 0)
                esi = arg1
            else
                esi = arg1
                
                if (sub_99b090(&var_38) != 0)
                    esi[0x16] = 3
                    
                    if (sub_99af70(arg2, arg3, &var_38) != 0)
                        goto label_743c18
        
        int32_t eax_16
        int32_t edx_3
        eax_16, edx_3 = sub_743dc0(esi, edi, 0x10000, 0)
        
        if (eax_16 == 0xffffff80 && edx_3 == 0xffffffff)
            esi_5 = 0xffffff80
            goto label_743c20
        
        if (edx_3 s< 0)
            goto label_743d41
        
        if (edx_3 s<= 0 && eax_16 u< 0)
            goto label_743d41
        
        if (esi[0x16] == 3)
            uint32_t eax_17 = sub_6e47d0(edi)
            
            if (esi[0x72] == eax_17)
                sub_6e4e20(&esi[0x1e], edi)
                break
        
        i = sub_6e4700(edi)
    while (i != 0)

if (esi[0x16] != 3)
label_743d41:
    esi_5 = 0xffffff7c
else
    int32_t* eax_18 = &esi[0x1e]
    int32_t ebx_3 = 0
    arg6 = eax_18
    
    while (true)
        int32_t eax_19 = sub_6e5340(eax_18, &var_38)
        
        if (eax_19 == 0)
            while (true)
                int32_t eax_24
                int32_t edx_4
                eax_24, edx_4 = sub_743dc0(arg1, edi, 0x10000, 0)
                
                if (edx_4 s< 0)
                    goto label_743c18
                
                if (edx_4 s<= 0 && eax_24 u< 0)
                    goto label_743c18
                
                uint32_t eax_25 = sub_6e47d0(edi)
                
                if (arg1[0x72] == eax_25)
                    sub_6e4e20(arg6, edi)
                    eax_18 = arg6
                    break
                
                if (sub_6e4700(edi) != 0)
                    if (var_8 != 0)
                        goto label_743c18
                    
                    var_8 = 1
        else
            if (eax_19 == 0xffffffff)
                break
            
            esi_5 = sub_99af70(arg2, arg3, &var_38)
            
            if (esi_5 != 0)
                goto label_743c20
            
            ebx_3 += 1
            
            if (ebx_3 s>= 2)
                return 0
            
            eax_18 = arg6
    
label_743c18:
    esi_5 = 0xffffff7b

label_743c20:
sub_99b640(arg2)
sub_99b8c0(arg3)
arg1[0x16] = 2
return esi_5

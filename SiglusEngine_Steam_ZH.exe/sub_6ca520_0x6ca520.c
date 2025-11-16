// 函数: sub_6ca520
// 地址: 0x6ca520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_8 = eax_1
uint32_t esi = arg1

if (esi != 0)
    if (*(esi + 0x118) == 0 && *(esi + 0x14d) == 0)
        if ((*(esi + 0x74) & 0x400) == 0)
            sub_6d42e0(arg1, "png_write_info was never called before png_write_row")
            noreturn
        
        sub_6d6f40(arg1)
    
    int32_t ebx
    ebx.b = *(esi + 0x14c)
    
    if (ebx.b != 0 && (*(esi + 0x7c) & 2) != 0)
        switch (zx.d(*(esi + 0x14d)))
            case 0
                if ((*(esi + 0x118) & 7) != 0)
                    void* eax_3 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_3
            case 1
                if ((*(esi + 0x118) & 7) != 0 || *(esi + 0x100) u< 5)
                    void* eax_4 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_4
            case 2
                if (((*(esi + 0x118)).b & 7) != 4)
                    void* eax_6 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_6
            case 3
                if ((*(esi + 0x118) & 3) != 0 || *(esi + 0x100) u< 3)
                    void* eax_7 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_7
            case 4
                if (((*(esi + 0x118)).b & 3) != 2)
                    void* eax_9 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_9
            case 5
                if ((*(esi + 0x118) & 1) != 0 || *(esi + 0x100) u< 2)
                label_6ca66a:
                    void* eax_10 = sub_6d70c0(esi)
                    sub_745f2b(var_8 ^ &__saved_ebp)
                    return eax_10
            case 6
                if ((*(esi + 0x118) & 1) == 0)
                    goto label_6ca66a
    
    arg1.b = *(esi + 0x154)
    int32_t edx = *(esi + 0x10c)
    char var_c_1 = *(esi + 0x14f)
    char eax_11 = *(esi + 0x151)
    char var_b_1 = eax_11
    eax_11 = muls.dp.b(eax_11, arg1.b)
    char var_a_1 = arg1.b
    int32_t var_14 = edx
    uint32_t ecx_18 = zx.d(eax_11)
    void* ecx_20
    
    if (eax_11 u< 8)
        ecx_20 = (ecx_18 * edx + 7) u>> 3
    else
        ecx_20 = (ecx_18 u>> 3) * edx
    
    int32_t* edi_1 = *(esi + 0x124) + 1
    void* var_10_1 = ecx_20
    sub_748840(edi_1, arg2, ecx_20)
    
    if (ebx.b == 0)
    label_6ca72b:
        
        if (*(esi + 0x7c) != 0)
            sub_6d7ff0(esi, &var_14)
        
        if (eax_11 != *(esi + 0x152) || eax_11 != *(esi + 0x157))
            sub_6d42e0(esi, "internal write transform logic error")
            noreturn
        
        if ((*(esi + 0x248) & 4) != 0 && *(esi + 0x24c) == 0x40)
            sub_6ca440(&var_14, *(esi + 0x124) + 1)
        
        if (var_c_1 == 3 && *(esi + 0x144) s>= 0)
            sub_6cf5b0(esi, &var_14)
        
        eax_1 = sub_6d77a0(esi, &var_14)
        int32_t ecx_31 = *(esi + 0x1c0)
        
        if (ecx_31 != 0)
            int32_t eax_16 = ecx_31(esi, *(esi + 0x118), zx.d(*(esi + 0x14d)))
            sub_745f2b(var_8 ^ &__saved_ebp)
            return eax_16
    else
        char eax_13 = *(esi + 0x14d)
        
        if (eax_13 u>= 6 || (*(esi + 0x7c) & 2) == 0)
            goto label_6ca72b
        
        uint32_t eax_14 = zx.d(eax_13)
        sub_6d7210(eax_14, edi_1, &var_14, eax_14)
        
        if (var_14 != 0)
            goto label_6ca72b
        
        eax_1 = sub_6d70c0(esi)

sub_745f2b(var_8 ^ &__saved_ebp)
return eax_1

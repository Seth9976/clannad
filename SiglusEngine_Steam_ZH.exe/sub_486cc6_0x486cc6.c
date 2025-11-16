// 函数: sub_486cc6
// 地址: 0x486cc6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t i
bool cond:0_1

do
    i = sub_48643c(arg1)
    
    if (i != 0xa)
        if (i == 0x23)
            do
                i = sub_48643c(arg1)
                
                if (i == 0xa)
                    break
            while (i != 0xffffffff)
            
        label_486cf7:
            data_b562f8 += 1
            goto label_486d31
        
        if (i != 0x2f)
            goto label_486d31
        
        uint32_t eax_3 = sub_48643c(arg1)
        
        if (eax_3 == i)
            do
                i = sub_48643c(arg1)
                
                if (i == 0xa)
                    break
            while (i != 0xffffffff)
            
            goto label_486cf7
        
        if (eax_3 != 0xffffffff)
            (*(**(arg1 + 0xc) + 8))()
        label_486d31:
            
            if (i == 0xffffffff)
                break
    else
        data_b562f8 += 1
    
    cond:0_1 = _isspace(i) != 0
while (cond:0_1)

switch (i)
    case 0x22
        return sub_4865c0() __tailcall
    case 0x28
        return 0xc
    case 0x29
        return 0xd
    case 0x2c
        return 0x13
    case 0x2e
        return 0x12
    case 0x3b
        return 0x14
    case 0x3c
        return sub_4864c7() __tailcall
    case 0x5b
        return 0xe
    case 0x5d
        return 0xf
    case 0x7b
        return 0xa
    case 0x7d
        return 0xb

if (_isalpha(i) != 0 || i == 0x5f)
    return sub_48677d(i.b)

int32_t result = _isdigit(i)

if (result != 0 || i == 0x2d || i == 0x2b)
    return sub_4868b0(i)

if (i == 0xfe || i != 0xffffffff)
    return 0xff

data_b9a5e8 = 1
return result

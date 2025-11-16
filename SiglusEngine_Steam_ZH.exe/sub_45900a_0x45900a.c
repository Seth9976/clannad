// 函数: sub_45900a
// 地址: 0x45900a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x2b] == 0)
    return 0x8876086c

int32_t result

if (arg1[0x31] == 0)
    result = 0
else
    result = (*(*arg1 + 0x28))(arg1)

sub_416380(1)

if ((arg1[0x2c].b & 3) == 0)
    int32_t* eax_4 = arg1[9]
    
    if (eax_4 != 0)
        (*(*eax_4 + 0x14))(eax_4)
    
    int32_t* eax_5 = arg1[3]
    (*(*eax_5 + 0x1a0))(eax_5, arg1[0xf])

char eax_6 = (arg1[0x2c]).b

if ((eax_6 & 0x10) != 0 && (eax_6 & 1) == 0)
    int32_t* eax_7 = arg1[0xb]
    
    if (eax_7 != 0)
        (*(*eax_7 + 0x14))(eax_7)

char eax_8 = (arg1[0x2c]).b

if (((eax_8 & 4) == 0 || (eax_8 & 8) != 0) && (eax_8 & 1) == 0)
    int32_t* eax_9 = arg1[0xd]
    
    if (eax_9 != 0)
        (*(*eax_9 + 0x14))(eax_9)

sub_416380(0)
arg1[0x2b] = 0
return result

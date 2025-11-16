// 函数: sub_41d0c1
// 地址: 0x41d0c1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 8)
int32_t edi
int32_t var_8 = edi

if (eax != 0)
    (*(*eax + 0x38))(eax)
else
    eax = *(arg1 + 4)
    
    if (eax != 0)
        (*(*eax + 0x38))(eax)

if (*(arg1 + 4) != 0 && *(arg1 + 8) != 0 && *(arg1 + 0x10) != 0 && (*arg1 & 1) == 0)
    sub_416380(1)
    int32_t* eax_1 = *(arg1 + 0x10)
    int32_t eax_2 = (*(*eax_1 + 0x78))(eax_1, *(arg1 + 8), 0, *(arg1 + 4), 0)
    sub_416380(0)
    
    if (eax_2 s< 0)
        sub_416380(1)
        sub_41cfe2(*(arg1 + 8), *(arg1 + 4))
        sub_416380(0)

int32_t* eax_3 = *(arg1 + 8)

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    *(arg1 + 8) = 0

int32_t* eax_4 = *(arg1 + 0xc)

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)
    *(arg1 + 0xc) = 0

int32_t* eax_5 = *(arg1 + 0x10)

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)
    *(arg1 + 0x10) = 0

int32_t* eax_6 = *(arg1 + 4)

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)
    *(arg1 + 4) = 0

return 0

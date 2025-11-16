// 函数: sub_420cd0
// 地址: 0x420cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1

if (edi s< 0 || edi s>= 8)
    edi = 0

if (data_13125b0 == edi)
    return 

sub_420bb0()
int32_t eax_1 = *(edi * 0x1fc + 0x12999a4)

if (eax_1 == 0xffffffff)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(data_70300c - (&data_12999a0)[edi * 0x7f])
    eax_1 = (eax_4 - edx_1) s>> 1

data_13126d0 = eax_1
data_13126d8 = (&data_12999a0)[edi * 0x7f]
data_13126dc = data_7030dc
data_1312798 = *(edi * 0x1fc + &data_12999a8)
data_131279c = *(edi * 0x1fc + 0x12999ac)
data_13127a0 = *(edi * 0x1fc + 0x12999b0)
data_13127a4 = *(edi * 0x1fc + 0x12999b4)
data_13127a8 = *(edi * 0x1fc + 0x12999b8)
data_13127ac = *(edi * 0x1fc + 0x12999bc)
int32_t eax_14 = *(edi * 0x1fc + 0x12999c0)
data_13126d4 = 0
void* eax_15

if (eax_14 s>= 0)
    eax_15 = &(&data_12a2990)[eax_14 * 2]

if (eax_14 s< 0 || eax_14 s>= 0x100)
    eax_15 = &data_12a2990

data_13127b0 = *eax_15
int32_t eax_17 = *(edi * 0x1fc + 0x12999c4)
void* eax_18

if (eax_17 s>= 0)
    eax_18 = &(&data_12a2990)[eax_17 * 2]

if (eax_17 s< 0 || eax_17 s>= 0x100)
    eax_18 = &data_12a2d8c

data_13127b4 = *eax_18
int32_t eax_20 = *(edi * 0x1fc + 0x12999c8)
void* eax_21

if (eax_20 s>= 0)
    eax_21 = &(&data_12a2990)[eax_20 * 2]

if (eax_20 s< 0 || eax_20 s>= 0x100)
    eax_21 = &data_12a2990

data_13127b8 = *eax_21
int32_t eax_23 = *(edi * 0x1fc + 0x12999cc)
void* eax_24

if (eax_23 s>= 0)
    eax_24 = &(&data_12a2990)[eax_23 * 2]

if (eax_23 s< 0 || eax_23 s>= 0x100)
    eax_24 = &data_12a2d8c

data_13127bc = *eax_24
int32_t eax_26 = *(edi * 0x1fc + 0x12999d0)

if (eax_26 s< 0 || eax_26 s>= 0x100)
    data_13127c0 = 0xff40ffff
else
    data_13127c0 = *((eax_26 << 2) + &data_12a2990)

int32_t eax_28 = *(edi * 0x1fc + 0x12999d4)
void* eax_29

if (eax_28 s>= 0)
    eax_29 = &(&data_12a2990)[eax_28 * 2]

if (eax_28 s< 0 || eax_28 s>= 0x100)
    eax_29 = &data_12a2d8c

bool cond:5_1 = *(edi * 0x1fc + 0x12999d8) == 0
data_13127c4 = *eax_29

if (not(cond:5_1))
    int32_t eax_31 = sub_4207d0(edi, nullptr)
    
    if (eax_31 == 1)
        sub_427370(eax_31, edi * 0x1fc + 0x12999d8, &data_1312570, 0xffffffff, 0, eax_31, 0, 
            nullptr, eax_31, 0)
        
        if (data_1312570 != 0)
            sub_426840(sub_420740(&data_1312570), 0, &data_1312570, 0x1312588, 0x131258c)
            sub_426840(sub_423ec0(&data_1312570, &data_1312590), 0, &data_1312590, 0x13125a8, 
                0x13125ac)
    else if (data_702fc0 == 0)
        void* var_10_1 = edi * 0x1fc + 0x12999d8
        sub_4c84d0(&data_7027c0, 0x614000)
        sub_446a50()

data_13127c8 = *(edi * 0x1fc + 0x1299a54)
data_13127cc = *(edi * 0x1fc + 0x1299a58)
data_13127d0 = *(edi * 0x1fc + 0x1299a5c)
int32_t i = 0
data_13127d4 = *(edi * 0x1fc + 0x1299a60)

do
    sub_420c20(edi, i)
    i += 1
while (i s< 8)

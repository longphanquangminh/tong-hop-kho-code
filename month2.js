// const nameOfMonth = (input: number): string => {
//     const months = [
//         "January",
//         "February",
//         "March",
//         "April",
//         "May",
//         "June",
//         "July",
//         "August",
//         "September",
//         "October",
//         "November",
//         "December"
//     ];

//     return input < 1 || input > months.length ? "invalid" : months[input - 1];
// };

const nameOfMonth = (input) => {
    const months = [
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    ];

    return input < 1 || input > months.length ? "invalid" : months[input - 1];
};
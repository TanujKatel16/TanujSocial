import bcrypt from "bcrypt";

const password = "tanuj123";

const hash = await bcrypt.hash(password,10);

console.log(hash);

console.log(
    await bcrypt.compare(
        "tanuj123",
        hash
    )
);

console.log(
    await bcrypt.compare(
        "wrongpassword",
        hash
    )
);
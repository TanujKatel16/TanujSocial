import dotenv from "dotenv";
import connectDB from "./db/index.js";
import { User } from "./models/user.models.js";

dotenv.config({
    path: "./.env"
});

await connectDB();

const user = await User.create({
    username: "Tanuj",
    email: "tanuj@gmail.com"
});

console.log(user);